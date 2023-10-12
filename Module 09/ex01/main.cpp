/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:13:57 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/12 07:56:31 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
    RPN rpn;
    
    if (argc != 2)
    {
        std::cout << "Usage: .RPN [inverted polish mathematical expression]" << std::endl;
        return (1);
    }
    try {
        rpn.process(argv[1]);
        std::cout << rpn.getResult() << std::endl;
    }
    catch (RPN::Error const &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}