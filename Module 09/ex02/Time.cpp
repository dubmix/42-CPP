/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Time.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:33:13 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/14 14:46:04 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

double PmergeMe::getTime()
{
    struct timeval time;

    gettimeofday(&time, NULL);
    return ((time.tv_sec * 1000) + (time.tv_usec * 0.001));
}

double PmergeMe::deltaTime(long long time)
{
    if (time > 0)
        return (getTime() - time);
    else
        return (0);
}

void PmergeMe::printTime(std::string str)
{
    double delta;

    if (str == "vector")
        delta = _deltaTimeVector;
    else
        delta = _deltaTimeDeque;
    std::cout << "Time to process a range of " << _size;
    std::cout << " elements with std::" << str;
    std::cout << ": " << std::fixed << std::setprecision(5) << delta;
    std::cout << " ms" << std::endl;
}