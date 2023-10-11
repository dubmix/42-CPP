/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:04:03 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/11 08:08:38 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    BitcoinExchange data("data.csv");
    std::string     line;
    std::string     date;
    float           value = 0.0f;

    if (argc > 2)
    {
        std::cout << "Usage: .btc [input.txt]" << std::endl;
        return (1);
    }
    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return (1);
    }
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::stringstream linestream(line);
        if (std::getline(linestream, date, '|') && linestream >> value)
        {
            date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
            try {
                float exchangeRate = data.getExchangeRate(date, value);
                float result = exchangeRate * value;
                std::cout << date << " => " << value << " = " << result << std::endl;
            }
            catch (BitcoinExchange::Error const &e) {
                std::cout << e.what() << std::endl;
            }
        }
        else
            std::cout << "Error: bad input => " << line << std::endl;
    }
    return (0);
}