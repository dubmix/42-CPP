/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:08:33 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/01 10:58:33 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::CharConvert::convert(ScalarConverter &sc)
{
    if (sc.isLiteral(sc._str) == 1)
        return ;
    sc._c = sc._str[0];
    sc._n = static_cast<int>(sc._c);
    sc._f = static_cast<float>(sc._c);
    sc._d = static_cast<double>(sc._c);
}

void ScalarConverter::IntConvert::convert(ScalarConverter &sc)
{
    if (std::atol(sc._str.c_str()) < INT_MIN || std::atol(sc._str.c_str()) > INT_MAX)
        return ;
    sc._n = std::atoi(sc._str.c_str());
    sc._f = static_cast<float>(sc._n);
    sc._d = static_cast<double>(sc._n);
    sc._c = static_cast<char>(sc._n);
}

void ScalarConverter::FloatConvert::convert(ScalarConverter &sc)
{
    sc._f = std::atof(sc._str.c_str());
    sc._d = static_cast<double>(sc._f);
    sc._c = static_cast<char>(sc._f);
    sc._n = static_cast<int>(sc._f);
}

void ScalarConverter::DoubleConvert::convert(ScalarConverter &sc)
{
    sc._d = std::strtod(sc._str.c_str(), NULL);
    sc._c = static_cast<char>(sc._d);
    sc._n = static_cast<int>(sc._d);
    sc._f = static_cast<float>(sc._d);
}