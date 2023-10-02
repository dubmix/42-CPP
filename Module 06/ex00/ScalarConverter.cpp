/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:59:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/02 11:38:05 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string     ScalarConverter::_str = "";
char            ScalarConverter::_c = '\0';
int             ScalarConverter::_n = 0;
float           ScalarConverter::_f = 0.0f;
double          ScalarConverter::_d = 0.0;

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &src) {(void)src;}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src) {(void)src; return (*this);}

bool ScalarConverter::isChar(std::string argv)
{
    if (isLiteral(argv) == 1)
    {
        _str = argv;
        return (1);
    }
    if (argv.length() != 1)
        return (0);
    else if (std::isalpha(argv[0]) == 0)
        return (0);
    else if (std::isprint(argv[0]) == 0)
        return (0);
    else
        _str = argv;
    return (1);
}

bool ScalarConverter::isInt(std::string argv)
{
    int j = 0;

    if (argv[j] == '-' || argv[j] == '+')
        j++;
    for (int i = j; i < static_cast<int>(argv.length()); i++)
        if (std::isdigit(argv[i]) == 0)
            return (0);
    _str = argv;
    return (1);
}

bool ScalarConverter::isFloat(std::string argv)
{
    int j = 0;
    int dec = 0;
    
    if (argv.find('.') == 0 || argv[argv.size() - 1] != 'f'
        || argv.find('.') == argv.length() - 2)
        return (0);
    if (argv[j] == '-' || argv[j] == '+')
        j++;
    for (int i = j; i < static_cast<int>(argv.length()) - 1; i++)
    {
        if (argv[i] == '.')
            dec = 1;
        else if (std::isdigit(argv[i]) == 0 || dec > 1)
            return (0);
    }
    _str = argv;
    return (1);
}

bool ScalarConverter::isDouble(std::string argv)
{
    int j = 0;
    int dec = 0;
    
    if (argv.find('.') == 0 || argv.find('.') == argv.length() - 1)
        return (0);
    if (argv[j] == '-' || argv[j] == '+')
        j++;
    for (int i = j; i < static_cast<int>(argv.length()); i++)
    {
        if (argv[i] == '.')
            dec = 1;
        else if (std::isdigit(argv[i]) == 0 || dec > 1)
            return (0);
    }
    _str = argv;
    return (1);
}

bool ScalarConverter::isLiteral(std::string argv)
{
    if (argv.compare("nan") == 0 || argv.compare("nanf") == 0
        || argv.compare("+inf") == 0 || argv.compare("-inf") == 0
        || argv.compare("+inff") == 0 || argv.compare("-inff") == 0)
        return (1);
    else
        return (0);
}

void ScalarConverter::convert(std::string argv)
{
    try {
        if (isChar(argv) == 1) {
            charConvert();
            printConversion();
        }
        else if (isInt(argv) == 1) {
            intConvert();
            printConversion();
        }
        else if (isFloat(argv) == 1) {
            floatConvert();
            printConversion();
        }
        else if (isDouble(argv) == 1) {
            doubleConvert();
            printConversion();
        }
        else
            throw ScalarConverter::Impossible();
    }
    catch (ScalarConverter::Impossible &e) {
        std::cout << e.what() << std::endl;
    }
}

void ScalarConverter::printConversion()
{
    std::cout << "Char value: " << printChar() << std::endl;
    std::cout << "Int value: " << printInt() << std::endl;
    std::cout << "Float value: " << printFloat() << std::endl;
    std::cout << "Double value: " << printDouble() << std::endl;
}

//edge case 42.000001f??