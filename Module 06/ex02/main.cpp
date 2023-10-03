/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 06:54:27 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/03 07:32:24 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

int main(void)
{
    Base *x = generate();

    std::cout << "Type of object *p: ";
    identify(x);
    std::cout << std::endl;

    std::cout << "Type of object p&: ";
    identify(*x);
    std::cout << std::endl;

    delete (x);
    
    return (0);
}