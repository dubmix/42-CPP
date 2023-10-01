/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:33:03 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/01 11:33:41 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string ScalarConverter::printChar(char c)
{
    if (isLiteral(_str) == 1 || _n > 126 || _n < 0)
        std::cout << "Impossible";
    else if (std::isprint(_n) == 0)
        std::cout << "Not displayable";
    else
        std::cout << "'" << c << "'";
    return ("");
}

std::string ScalarConverter::printInt(int n)
{
    if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
        std::cout << "Impossible";
    else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0)
        std::cout << "Impossible";
    else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0)
        std::cout << "Impossible";
    else
        std::cout << n;
    return ("");
}

std::string ScalarConverter::printFloat(float f)
{
    if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
        std::cout << "nanf";
    else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0)
        std::cout << "+inff";
    else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0)
        std::cout << "-inff";
    else
    {
        if (f - static_cast<int>(f) == 0)
            std::cout << f << ".0f";
        else
            std::cout << f << "f";
    }
    return("");
}

std::string ScalarConverter::printDouble(double d)
{   
    if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
        std::cout << "nan";
    else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0)
        std::cout << "+inf";
    else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0)
        std::cout << "-inf";
    else
    {
        if (d - static_cast<int>(d) == 0)
            std::cout << d << ".0";
        else
            std::cout << d;
    }
    return("");
}