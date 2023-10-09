/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:03:46 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/09 07:55:19 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP

# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
//# include <string>
# include <map>

class BitcoinExchange
{
    private:
            std::map<std::string, float> _exchangeRates;

    protected:

    public:
            BitcoinExchange();
            BitcoinExchange(std::string const &database);
            BitcoinExchange(BitcoinExchange const &src);
            ~BitcoinExchange();

            BitcoinExchange &operator==(BitcoinExchange const &src);

            float getExchangeRate(std::string const &date, float value);
};

#endif