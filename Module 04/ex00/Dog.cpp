/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:10:57 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 12:01:05 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src): Animal(src)
{
    this->type = src.type;
}

Dog &Dog::operator=(Dog const &src)
{
    if (this == &src)
        return (*this);
    this->type = src.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}

Dog::~Dog()
{
    std::cout <<"Dog destructor called" << std::endl;
}