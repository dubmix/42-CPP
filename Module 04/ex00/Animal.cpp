/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:32:45 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 10:42:12 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = src.type;
}

Animal &Animal::operator=(Animal const &src)
{
    if (this == &src)
        return (*this);
    this->type = src.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "????" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}