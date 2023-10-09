/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:03:43 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/09 08:49:42 by pdelanno         ###   ########.fr       */
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
        std::cout << "Error: could not open .csv file";
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

float BitcoinExchange::getExchangeRate(std::string const &date, float value)
{
    if (value < 0)
    {
        std::cout << "Error: value cannot be negative" << std::endl;
        return (0);
    }   
    std::map<std::string, float>::iterator it = _exchangeRates.find(date);
    return (it->second); // accessing the value after the key
}