/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:01:30 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/05 06:54:43 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, unsigned int size, void (*f)(T &)) // function pointer called f that
                                                    // returns void and takes a ref to T as arg
{
    for (unsigned int i = 0; i < size; i++)
        f(arr[i]);
}

template <typename T>
void print(T &c) {std::cout << c << std::endl;}

#endif