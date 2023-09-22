/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 07:06:27 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/19 14:34:12 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    std::cout << std::endl;
    Fixed b(a);
    std::cout << std::endl;
    Fixed c;
    std::cout << std::endl;

    c = b;
    std::cout << std::endl;

    std::cout << a.getRawBits() << std::endl;
    std::cout << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << std::endl;

    return (0);
}