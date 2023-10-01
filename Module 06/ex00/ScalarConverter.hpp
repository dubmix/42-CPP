/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:42:59 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/01 11:17:27 by pdelanno         ###   ########.fr       */
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
            std::string _str;
            char _c;
            int _n;
            float _f;
            double _d;
    
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
            bool    isLiteral(std::string argv);

            std::string    printChar(char c);
            std::string    printInt(int n);
            std::string    printFloat(float f);
            std::string    printDouble(double d);

            char    getChar();
            int     getInt();
            float   getFloat();
            double  getDouble();
            
            class CharConvert: public std::exception
            {
                public:
                        void convert(ScalarConverter &sc);
            };

            class IntConvert: public std::exception
            {
                public:
                        void convert(ScalarConverter &sc);
            };

            class FloatConvert: public std::exception
            {
                public:
                        void convert(ScalarConverter &sc);
            };

            class DoubleConvert: public std::exception
            {
                public:
                        void convert(ScalarConverter &sc);
            };

            class Impossible: public std::exception
            {
                public:
                        virtual const char *what()
                        {return ("Conversion impossible");}
            };
};

std::ostream &operator<<(std::ostream &str, ScalarConverter &sc);

#endif