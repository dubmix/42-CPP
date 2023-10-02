/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:55:45 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/02 11:33:32 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: ./converter [number]" << std::endl;
        return (1);
    }
    
    //ScalarConverter sc;
    //sc.convert(argv[1]);
    
    ScalarConverter::convert(argv[1]);
    
    return (0);
}