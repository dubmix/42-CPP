/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 07:58:01 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/03 09:04:24 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main (void)
{
    // int a = 42;
    // int b = 1;
    // int c;
    // std::string a = "whaaaaaat";
    // std::string b = "ev3r*$%";
    // std::string c;
    float a = 42.89f;
    float b = -32.2f;
    float c;
    // std::string a = "whaa";
    // std::string b = "whab";
    // std::string c;

    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << std::endl;
    swap(a, b);
    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << std::endl;
    std::cout << "min is: " << min(a, b) << std::endl;
    std::cout << "max is: " << max(a, b) << std::endl;
    std::cout << std::endl;
    c = add(b, a);
    std::cout << "c is: " << c << std::endl;

    return (0);
}
