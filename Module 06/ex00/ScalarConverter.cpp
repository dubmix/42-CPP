/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:59:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 15:44:21 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(): _type("NONE") {}

ScalarConverter::ScalarConverter(ScalarConverter const &src) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src) {}

void convert(std::string argv)
{
    try {
        if isLiterals(argv)
        else if isChar(argv) == 1
            throw
            // in each exception, recast the values
        else if isInt(argv) == 1
            throw
            throw isImpossible
    }
    catch {
        
    }
    catch {
        
    }
    // print result
}