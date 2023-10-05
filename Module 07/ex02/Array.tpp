/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 07:59:51 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/05 08:55:25 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void): _arr(new T()), _size(0) {}; //T() or T[]

template <typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n) {};

template <typename T>
Array<T>::Array(Array const &src): _arr(new T[src.getSize()]), _size(src.getSize())
{
    for (unsigned int i = 0; i < _size; i++)
        _arr[i] = src._arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src) // maybe Array<T> as argument type
{
    if (*this == &src)
        return (*this);
    _arr = new T[src.getSize()];
    _size = src.getSize();
    for (unsigned int i = 0; i < _size; i++)
        _arr[i] = src._arr[i];
    return (*this);
}

template <typename T>
Array<T>::~Array() {if(_size == 0) {delete (_arr);} else {delete [] (_arr);}};

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
    if (i >= _size)
        throw OutOfBoundsException();
    return _arr[i];
}

template <typename T>
unsigned int Array<T>::getSize() const {return (_size);}

template <typename T>
std::ostream &operator<<(std::ostream &str, Array<T> const &arr)
{
    for (unsigned int i = 0; i < arr.getSize(); i++)
        str << arr[i] << " ";
    str << std::endl;
    return (str);
}