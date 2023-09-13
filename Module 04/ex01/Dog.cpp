/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:10:57 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 08:23:26 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
    *this = copy;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout <<"Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
    this->type = copy.type;
    this->_brain = new Brain(*copy._brain);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
    std::cout << "Doggo is thinking: " << this->getBrain()->getIdeas(0) << std::endl;
}

Brain *Dog::getBrain() const
{
    return (_brain);
}