/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:08:33 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/24 12:44:08 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::charConvert()
{
    if (isLiteral(_str) == 1)
        return ;
    _c = _str[0];
    _n = static_cast<int>(_c);
    _f = static_cast<float>(_c);
    _d = static_cast<double>(_c);
}

void ScalarConverter::intConvert()
{
    if (std::atol(_str.c_str()) < INT_MIN || std::atol(_str.c_str()) > INT_MAX)
        return ;
    _n = std::atoi(_str.c_str());
    _f = static_cast<float>(_n);
    _d = static_cast<double>(_n);
    _c = static_cast<char>(_n);
}

void ScalarConverter::floatConvert()
{
    _f = std::atof(_str.c_str());
    _d = static_cast<double>(_f);
    _c = static_cast<char>(_f);
    if (std::atol(_str.c_str()) < INT_MIN || std::atol(_str.c_str()) > INT_MAX)
        return ;
    _n = static_cast<int>(_f);
}

void ScalarConverter::doubleConvert()
{
    _d = std::strtod(_str.c_str(), NULL);
    _c = static_cast<char>(_d);
    _f = static_cast<float>(_d);
    if (std::atol(_str.c_str()) < INT_MIN || std::atol(_str.c_str()) > INT_MAX)
        return ;
    _n = static_cast<int>(_d);
}