/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:32:45 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/12 11:17:41 by pdelanno         ###   ########.fr       */
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

Animal::Animal(Animal const &copy)
{
    std::cout << "Animal copy called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(Animal const &copy)
{
    this->type = copy.type;
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