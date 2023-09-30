/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:42:59 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 15:44:09 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP

# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter
{
    private:
            std::string _type;
    
    public:
            ScalarConverter();
            ScalarConverter(ScalarConverter const &src);
            ~ScalarConverter();

            ScalarConverter &operator=(ScalarConverter const &src);

            void    convert(std::string argv);

            bool    isChar(std::string argv);
            bool    isInt(std::string argv);
            bool    isFloat(std::string argv);
            bool    isDouble(std::string argv);

            class UnknownTypeException: public std::exception
            {
                virtual const char *what() throw()
                // declare function here then define ScalarConverter::UnknownType::...
                {return ("Unknown type");}
            };
};

#endif