/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:33:35 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 07:09:18 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src): Animal(src)
{
    this->type = src.type;
}

Cat &Cat::operator=(Cat const &src)
{
    if (this == &src)
        return (*this);
    this->type = src.type;
    this->_brain = new Brain(*src._brain);
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