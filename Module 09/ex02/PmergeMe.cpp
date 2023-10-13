/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:08:56 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 08:44:26 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _size(0), _isSorted(0) {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(int argc, char *argv[]): _size(argc - 1), _isSorted(0)
{
    _vector = parseArgsVector(argc, argv);
    printSeq();
}

std::vector<int> PmergeMe::parseArgsVector(int argc, char *argv[])
{
    std::vector<int>    vec;
    int                 value;
    
    for (int i = 1; i < argc; i++)
    {
        value = atoi(argv[i]);
        if (value <= 0)
            throw Error("Error: invalid argument");
        vec.push_back(value);
    }
    return (vec);
}

// template <typename T>
// void PmergeMe::FordJohnson(T &container)
// {
    
// }

void    PmergeMe::printSeq()
{
    if (!_isSorted)
        std::cout << "Before  -> ";
    else
        std::cout << "After   -> ";
    std::vector<int>::iterator it = _vector.begin();
    std::vector<int>::iterator ite = _vector.end();
    while (it != ite)
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << std::endl;
}