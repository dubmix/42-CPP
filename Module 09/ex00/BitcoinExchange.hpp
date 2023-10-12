/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:03:46 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/11 08:32:42 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP

# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <algorithm>
//# include <string>
# include <map>

class BitcoinExchange
{
    private:
            std::map<std::string, float> _exchangeRates;

    public:
            BitcoinExchange();
            BitcoinExchange(std::string const &database);
            BitcoinExchange(BitcoinExchange const &src);
            ~BitcoinExchange();

            BitcoinExchange &operator=(BitcoinExchange const &src);

            float getExchangeRate(std::string const &date, float value);
            bool  isValid(std::string const &date);

            class Error: public std::exception
            {
                private:
                        std::string _msg;
                public:
                        Error(std::string const &msg): _msg(msg) {}
                        virtual const char *what() const throw()
                            {return(_msg.c_str());}
                        virtual ~Error() throw() {}
            };
};

#endif