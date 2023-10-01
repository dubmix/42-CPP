/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:59:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/01 11:33:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(): _c('\0'), _n(0), _f(0.0f), _d(0.0) {}

ScalarConverter::ScalarConverter(ScalarConverter const &src) {(void)src;}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src) {(void)src; return (*this);}

char ScalarConverter::getChar() {return (_c);}

int ScalarConverter::getInt() {return (_n);}

float ScalarConverter::getFloat() {return (_f);}

double ScalarConverter::getDouble() {return (_d);}

bool ScalarConverter::isChar(std::string argv)
{
    if (isLiteral(argv) == 1)
    {
        this->_str = argv;
        return (1);
    }
    if (argv.length() != 1)
        return (0);
    else if (std::isalpha(argv[0]) == 0)
        return (0);
    else if (std::isprint(argv[0]) == 0)
        return (0);
    else
        this->_str = argv;
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
    this->_str = argv;
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
    this->_str = argv;
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
    this->_str = argv;
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
        if (isChar(argv) == 1)
            throw ScalarConverter::CharConvert();
        else if (isInt(argv) == 1)
            throw ScalarConverter::IntConvert();
        else if (isFloat(argv) == 1)
            throw ScalarConverter::FloatConvert();
        else if (isDouble(argv) == 1)
            throw ScalarConverter::DoubleConvert();
        else
            throw ScalarConverter::Impossible();
    }
    catch (ScalarConverter::CharConvert &e) {
        e.convert(*this);
        std::cout << (*this);
    }
    catch (ScalarConverter::IntConvert &e) {
        e.convert(*this);
        std::cout << (*this);
    }
    catch (ScalarConverter::FloatConvert &e) {
        e.convert(*this);
        std::cout << (*this);
    }
    catch (ScalarConverter::DoubleConvert &e) {
        e.convert(*this);
        std::cout << (*this);
    }
    catch (ScalarConverter::Impossible &e) {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &str, ScalarConverter &sc)
{
    str << "Char value: " << sc.printChar(sc.getChar()) << std::endl;
    str << "Int value: " << sc.printInt(sc.getInt()) << std::endl;
    str << "Float value: " << sc.printFloat(sc.getFloat()) << std::endl;
    str << "Double value: " << sc.printDouble(sc.getDouble()) << std::endl;
    return (str);
}

//edge case 42.000001f??