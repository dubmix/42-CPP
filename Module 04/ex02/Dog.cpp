/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:10:57 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 07:27:49 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src): AAnimal(src)
{
    this->type = src.type;
}

Dog::~Dog()
{
    delete (this->_brain);
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    if (this == &src)
        return (*this);
    this->type = src.type;
    this->_brain = new Brain(*src._brain);
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