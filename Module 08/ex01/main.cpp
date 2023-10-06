/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 06:59:55 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/06 08:21:52 by pdelanno         ###   ########.fr       */
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

    // test with 10000
    
    return (0);
}