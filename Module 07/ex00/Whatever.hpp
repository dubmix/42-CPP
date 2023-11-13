/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 08:19:22 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/03 08:52:44 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

# define WHATEVER_HPP

# include <iostream>

template <typename Type>
Type add(Type const &a, Type const &b) {return (a + b);}

template <typename T> // use T for convention
void swap (T &a, T &b) {T tmp = a; a = b; b = tmp;}

template <typename T>
T min(T &a, T &b) {return (a < b ? a : b);};

template <typename T>
T max(T &a, T &b) {return (a > b ? a : b);};

#endif