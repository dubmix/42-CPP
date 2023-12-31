/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 05:49:57 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/21 07:51:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>

template <typename T>
void easyfind(T &container, int n)
{
    if (std::find(container.begin(), container.end(), n) == container.end())
        throw std::runtime_error("Not found"); // constructor already provided
    else
        std::cout << "Found!" << std::endl;
}

#endif