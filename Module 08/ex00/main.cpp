/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 05:59:57 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/06 06:33:14 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: ./easyfind [number]" << std::endl;
        return (1);
    }

    int arr[] = {1, 2, 3, 4, 5};
    
    std::list<int> list(arr, arr + sizeof(arr) / sizeof(int)); // initialized using iterators
    // can be traversed in both directions
    
    try {
        easyfind(list, std::atoi(argv[1])); // not first argument type <T>
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::vector<int> vector(arr, arr + sizeof(arr) / sizeof(int));
    // standard dynamic arrayes, can gorw and shrink in size

    try {
        easyfind(vector, std::atoi(argv[1]));
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::deque<int> deque(arr, arr + sizeof(arr) / sizeof(int));
    // double ended queues, for insertion and deletion at both ends

    try {
        easyfind(deque, std::atoi(argv[1]));
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}