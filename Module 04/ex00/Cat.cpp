/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:33:35 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 10:44:20 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
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
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meowww" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}