/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 07:06:27 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/22 16:22:35 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    std::cout << std::endl;
    Fixed b(Fixed(5.05f) * Fixed(2));
    std::cout << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl; //incrementation is done in 256th steps
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << std::endl;

    std::cout << b << std::endl;
    std::cout << ++b << std::endl;
    std::cout << std::endl;
    
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << std::endl;

    return (0);
}