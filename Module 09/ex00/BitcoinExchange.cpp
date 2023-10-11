/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:03:43 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/11 08:06:09 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string const &database)
{
    std::string line;
    std::string date;
    std::string value;
    float       convertedValue;

    std::ifstream file(database.c_str());
    if (!file.is_open())
    {
        std::cout << "Error: could not open .csv file" << std::endl;
        return ;
    }
    while (std::getline(file, line))
    {
        std::stringstream linestream(line);
        std::getline(linestream, date, ',');
        std::getline(linestream, value);
        std::istringstream stringstream(value);
        stringstream >> convertedValue;
        //std::cout.precision(7);
        _exchangeRates[date] = convertedValue;
    }
    file.close();
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    _exchangeRates = src._exchangeRates;
}

bool BitcoinExchange::isValid(std::string const &date)
{
    int     y, m, d;
    char    c;
    std::istringstream linestream(date);

    linestream >> y >> c >> m >> c >> d;
    if (y < 0 || m < 1 || m > 12 || d < 1 || d > 31)
        return (0);
    if (m == 2)
    {
        if (d > 28)
            return (0);
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        if (d > 30)
            return (0);
    return (1);
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
    if (this == &src)
        return (*this);
    _exchangeRates = src._exchangeRates;
    return (*this);
}

float BitcoinExchange::getExchangeRate(std::string const &date, float value)
{
    if (value < 0)
        throw Error("Error: not a positive number");
    if (value > 1000)
        throw Error("Error: too large a number");
    if (!isValid(date))
        throw Error("Error: date is not valid");
    std::map<std::string, float>::iterator it = _exchangeRates.find(date);
    if (it == _exchangeRates.end())
    {
        it = _exchangeRates.upper_bound(date);
        //if (it == _exchangeRates.begin())
          //  throw Error ("Error: invalid argument");
        //--it;
    }
    return (it->second); // accessing the value after the key
}