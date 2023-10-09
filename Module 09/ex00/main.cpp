/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:04:03 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/09 09:02:58 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    BitcoinExchange data("data.csv");
    std::string     line;
    std::string     date;
    float           value;

    if (argc != 2)
    {
        std::cout << "Usage: .btc [input.txt]" << std::endl;
        return (1);
    }
    // (void)argc;
    // (void)argv;
    // std::cout << data.getExchangeRate("2022-03-25", 1) << std::endl;
    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return (1);
    }
    while (std::getline(file, line))
    {
        std::stringstream linestream(line);
        linestream >> value;
        if (std::getline(linestream, date, '|'))
        {
            try {
                float exchangeRate = data.getExchangeRate(date, value);
                float result = exchangeRate;
                std::cout << date << " => " << value << " = " << result << std::endl;
            }
            catch(std::exception const &e) {
                std::cout << e.what() << std::endl;
            }
        }
        else
            std::cout << "Error: bad input => " << line << std::endl;
    }
    return (0);
}