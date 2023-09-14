/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:33:35 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 08:22:42 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
    *this = copy;
}

Cat &Cat::operator=(Cat const &copy)
{
    this->type = copy.type;
    this->_brain = new Brain(*copy._brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meowww" << std::endl;
    std::cout << "Kitty is thinking: " << this->getBrain()->getIdeas(0) << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (_brain);
}