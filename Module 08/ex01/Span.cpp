/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 06:44:22 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/06 08:06:31 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N): _N(N) {}

Span::Span(Span const &src)
{
    this->_N = src._N;
    this->_list = src._list;
}

Span::~Span() {}

Span &Span::operator=(Span const &src)
{
    if (this == &src)
        return (*this);
    this->_N = src._N;
    this->_list = src._list;
    return (*this);
}

void Span::addNumber(int n)
{
    if (_list.size() >= _N)
        throw OutOfRangeException("List is full");
    _list.push_back(n);
}

int Span::longestSpan()
{
    if (_list.size() < 2)
        throw OutOfRangeException("list with too few elements");
    int highestValue = *std::max_element(_list.begin(), _list.end()); // derefeencing the iterator to get the value it points at
    int lowestValue = *std::min_element(_list.begin(), _list.end());
    return (highestValue - lowestValue);
}

int Span::shortestSpan()
{
    int min = longestSpan();

    if (_list.size() < 2)
        throw OutOfRangeException("list with too few elements");
    for (std::list<int>::const_iterator i = _list.begin(); i != _list.end(); i++)
    {
        for (std::list<int>::const_iterator j = _list.begin(); j != _list.end(); j++)
        {
            if (j == i)
                continue;
            if (std::abs(*j - *i) < min)
                min = std::abs(*j - *i);
        }
    }
    return (min);
}

const std::list<int> *Span::getList() const {return (&_list);} // why does everything need to be const here

std::ostream &operator<<(std::ostream &str, Span const &s)
{
    for (std::list<int>::const_iterator i = s.getList()->begin(); i != s.getList()->end(); i++)
        str << *i << " ";
    return (str);
}