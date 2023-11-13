/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 07:06:27 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/22 08:43:12 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    float nb = 3.4;
    int rounded = roundf(nb);
    std::cout << nb << std::endl;
    std::cout << rounded << std::endl;
    std::cout << std::endl;

    Fixed a; // default constructor called
    Fixed const b(10); // int constructor called
    Fixed const c(42.42f); // float constructor called
    Fixed const d(b); // copy constructor called
    std::cout << std::endl;

    a = Fixed(1234.4321f); // temporary object
    std::cout << std::endl;

    std::cout << "a is " << a << std::endl; // need the overload operator to convert type "Fixed" to float
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    std::cout << std::endl;

    return (0);
}