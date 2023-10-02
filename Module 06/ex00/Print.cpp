/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:33:03 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/02 11:32:17 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string ScalarConverter::printChar()
{
    if (isLiteral(_str) == 1 || _n > 126 || _n < 0)
        std::cout << "Impossible";
    else if (std::isprint(_n) == 0)
        std::cout << "Not displayable";
    else
        std::cout << "'" << _c << "'";
    return ("");
}

std::string ScalarConverter::printInt()
{
    if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
        std::cout << "Impossible";
    else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0)
        std::cout << "Impossible";
    else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0)
        std::cout << "Impossible";
    else
        std::cout << _n;
    return ("");
}

std::string ScalarConverter::printFloat()
{
    if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
        std::cout << "nanf";
    else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0)
        std::cout << "+inff";
    else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0)
        std::cout << "-inff";
    else
    {
        if (_f - static_cast<int>(_f) == 0)
            std::cout << _f << ".0f";
        else
            std::cout << _f << "f";
    }
    return("");
}

std::string ScalarConverter::printDouble()
{   
    if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
        std::cout << "nan";
    else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0)
        std::cout << "+inf";
    else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0)
        std::cout << "-inf";
    else
    {
        if (_d - static_cast<int>(_d) == 0)
            std::cout << _d << ".0";
        else
            std::cout << _d;
    }
    return("");
}