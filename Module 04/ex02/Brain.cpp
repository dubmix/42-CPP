/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:34:15 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 08:26:17 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    this->_ideas[0] = "I like food more than humans";
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
    return (*this);
}

std::string Brain::getIdeas(int index) const
{
    return(_ideas[index]);
}