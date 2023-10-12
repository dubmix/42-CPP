/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:14:05 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/12 07:55:44 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(): _result(0) {}

RPN::~RPN() {}

void    RPN::process(std::string const &str)
{
    char c;
    std::string nb;
    
    for (unsigned int i = 0; i < str.length(); i++)
    {
        c = str[i];
        
        if (c == ' ')
            continue;
        else if (isdigit(c))
            nb += c;
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            if (_stack.size() < 2)
                throw Error("Error: not enough operands");
            int n1 = _stack.top();
            _stack.pop();
            int n2 = _stack.top();
            _stack.pop();
            calculate(n1, n2, c);
        }
        else
            throw Error("Error: invalid character");
        if (!nb.empty())
        {
            if (atoi(nb.c_str()) < 10 && atoi(nb.c_str()) >= 0)
            {
                _stack.push(atoi(nb.c_str()));
                nb.clear();
            }
            else
                throw Error("Error: invalid argument");
        } 
    }
    if (_stack.size() != 1)
        throw Error("Error: too many operands");
    _result = _stack.top();
    _stack.pop();
}

void RPN::calculate(int n1, int n2, char c)
{
    switch (c)
    {
        case '+':
            _stack.push(n2 + n1);
            break;
        case '-':
            _stack.push(n2 - n1);
            break;
        case '*':
            _stack.push(n2 * n1);
            break;
        case '/':
            if (n2 == 0)
                throw Error("Error: division by 0 is undefined");
            _stack.push(n2 / n1);
            break;
    }
}

int RPN::getResult()
{
    return(_result);
}

