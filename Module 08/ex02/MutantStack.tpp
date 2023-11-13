/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 07:14:42 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/21 09:27:43 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, class Container>
MutantStack<T, Container>::MutantStack() {}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack const &src): std::stack<T, Container>(src)
{
    *this = src;
}

template <typename T, class Container>
MutantStack<T, Container>::~MutantStack() {}

template <typename T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(MutantStack const &src)
{
    std::stack<T, Container>::operator=(src);
    return (*this);
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
    return (this->c.begin());
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
    return (this->c.end());
}