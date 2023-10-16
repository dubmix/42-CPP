/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:42:59 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 14:28:09 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP

# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <climits>

class ScalarConverter
{
    private:
            static std::string _str;
            static char _c;
            static int _n;
            static float _f;
            static double _d;
            
            ScalarConverter();
            ScalarConverter(ScalarConverter const &src);
            ~ScalarConverter();
    
            ScalarConverter &operator=(ScalarConverter const &src);
            
    public:
            static void    convert(std::string argv);
            
            static bool    isChar(std::string argv);
            static bool    isInt(std::string argv);
            static bool    isFloat(std::string argv);
            static bool    isDouble(std::string argv);
            static bool    isLiteral(std::string argv);

            static std::string    printChar();
            static std::string    printInt();
            static std::string    printFloat();
            static std::string    printDouble();

            static void    charConvert();
            static void    intConvert();
            static void    floatConvert();
            static void    doubleConvert();

            static void    printConversion();

            class Impossible: public std::exception
            {
                public:
                        virtual const char *what() const throw()
                        {return ("Conversion impossible");}
            };
};

#endif