/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:06:31 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 08:12:08 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Error: no sequence provided" << std::endl;
        return (1);
    }
    try {
        PmergeMe sequence(argc, argv);
    }
    catch (PmergeMe::Error const &e) {
        std::cout << e.what() << std::endl;
    }
}