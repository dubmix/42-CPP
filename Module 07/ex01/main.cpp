/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:09:39 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 16:10:33 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
    int arrInt[] = {1, 2, 3, 42};
    std::cout << arrInt << std::endl;
    iter(arrInt, 4, print); // not calling the function, just passing the function pointer
    std::cout << std::endl;

    std::string arrStr[] = {"hey", "what's", "uppp"};
    std::cout << arrStr << std::endl;
    iter(arrStr, 3, print);
    std::cout << std::endl;

    char arrChar[] = {'y', 'o', 'l', 'o'};
    std::cout << &arrChar << std::endl;
    iter(arrChar, 4, print);
    std::cout << std::endl;
    
    double arrDouble[] = {1.655, 7.432, 34.6, 99.99, 54};
    std::cout << arrDouble << std::endl;
    iter(arrDouble, 5, print);

    return (0);
}