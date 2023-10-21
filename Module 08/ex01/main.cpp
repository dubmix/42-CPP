/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 06:59:55 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/21 08:54:59 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    Span list = Span(5);

    list.addNumber(45);
    std::cout << list << std::endl;

    try {
        list.addNumber(2);
        list.addNumber(9);
        list.addNumber(100);
        list.addNumber(3);
        list.addNumber(-8);
    }
    catch (Span::OutOfRangeException &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << list << std::endl;

    try {
        std::cout << "Longest span: " << list.longestSpan() << std::endl;
        std::cout << "Shortest span: " << list.shortestSpan() << std::endl;
    }
    catch (Span::OutOfRangeException &e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl;

    Span biglist = Span(12000);
    std::srand(std::time(0));
    std::list<int> l(12000);
    for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        *it = static_cast<int>(rand());
    }
    try {
        biglist.addALotOfNumbers(l.begin(), l.end());
        std::cout << "Longest biglist span: " << biglist.longestSpan() << std::endl;
        std::cout << "Shortest biglist span: " << biglist.shortestSpan() << std::endl;
    }
    catch (Span::OutOfRangeException &e) {
        std::cout << e.what() << std::endl;
    }
    
    return (0);
}