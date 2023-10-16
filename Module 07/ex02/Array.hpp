/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 06:54:52 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 16:11:52 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP
# include <iostream>
# include <cstdlib>
# include <cmath>
# include <string>

template <typename T>
class Array 
{
    private:
            T* _arr;
            unsigned int _size;

    public:
            Array(void);
            Array(unsigned int n);
            Array(const Array &src);
            ~Array(void);

            Array &operator=(Array const &src);
            T &operator[](unsigned int i) const;

            unsigned int getSize(void) const;

            class OutOfBoundsException: public std::exception
            {
                public:
                        virtual const char *what() const throw()
                        {return ("Index is out of bounds");}
            };
};

template <typename T>
std::ostream &operator<<(std::ostream &str, Array<T> const &arr);

# include "Array.tpp"

#endif