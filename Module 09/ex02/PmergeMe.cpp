/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:08:56 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/14 14:46:55 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _size(0), _isSorted(0) {}

PmergeMe::~PmergeMe() {std::cout << "ciao" << std::endl;}

PmergeMe::PmergeMe(int argc, char *argv[]): _size(argc - 1), _isSorted(0)
{
    double tStart;
    
    _vector = parseArgsVector(argc, argv);
    checkDuplicates();
    printSeq();
    _deque = parseArgsDeque(argc, argv);
    
    tStart = getTime();
    FordJohnson(_vector);
    _deltaTimeVector = deltaTime(tStart);

    tStart = getTime();
    FordJohnson(_deque);
    _deltaTimeDeque = deltaTime(tStart);

    _isSorted = 1;
    printSeq();
    printTime("vector");
    printTime("deque");
}

template <typename T>
void PmergeMe::FordJohnson(T &container)
{
    int size = container.size();
    
    if (size < 2)
        return ;
    // insertion sort
    if (size < 10)
    {
        for (typename T::iterator it1 = container.begin(); it1 != container.end(); ++it1)
        {
            typename T::iterator it2 = it1;
            while (it2 != container.begin())
            {
                if (*(it2 - 1) > *it2)
                    std::swap(*it2, *(it2 - 1));
                --it2;
            }
        }
        return ;
    }
    // divide the container into two halves
    typename T::iterator it_mid = container.begin() + (size / 2);
    T left(container.begin(), it_mid); // elements from container.begin() to mid - 1
    T right(it_mid, container.end());
    // recursively sort the halves
    FordJohnson(left);
    FordJohnson(right);
    // merge the sorted halves
    typename T::iterator it_left = left.begin();
    typename T::iterator it_right = right.begin();
    typename T::iterator it_container = container.begin();
    while (it_left != left.end() && it_right != right.end())
    {
        if (*it_left < *it_right)
        {
            *it_container = *it_left;
            ++it_left;
        }
        else
        {
            *it_container = *it_right;
            ++it_right;
        }
        ++it_container;
    }
    // handle remaining elements (if any)
    while (it_left != left.end())
    {
        *it_container = *it_left;
        ++it_left;
        ++it_container;
    }
    while (it_right != right.end())
    {
        *it_container = *it_right;
        ++it_right;
        ++it_container;
    }
}

void PmergeMe::checkDuplicates()
{
    std::set<int> set; // better time factor for searching a value, is already sorted
    int n;
    
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); ++it)
    {
        n = *it;
        if (set.find(n) != set.end())
            throw Error("Error: duplicate values");
        set.insert(n);
    }
}

bool    PmergeMe::isNumber(char *argv)
{
    for (size_t i = 0; i < strlen(argv); i++)
    {
        if (argv[0] == '-')
            continue;
        if (!isdigit(argv[i]))
            return (0);
    }
    return (1);
}

std::vector<int> PmergeMe::parseArgsVector(int argc, char *argv[])
{
    std::vector<int>    vec;
    int                 value;
    
    for (int i = 1; i < argc; i++)
    {
        if (!isNumber(argv[i]))
            throw Error("Error: invalid argument");
        value = atoi(argv[i]);
        if (value < 0)
            throw Error("Error: numbers must be positive");
        vec.push_back(value);
    }
    return (vec);
}

std::deque<int> PmergeMe::parseArgsDeque(int argc, char *argv[])
{
    std::deque<int> deq;
    int             value;

    for (int i = 1; i < argc; i++)
    {
        value = atoi(argv[i]);
        deq.push_back(value);
    }
    return(deq);
}

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