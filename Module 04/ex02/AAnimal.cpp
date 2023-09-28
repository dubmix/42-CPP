/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:32:45 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 07:21:30 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("Animal")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = src.type;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
    if (this == &src)
        return (*this);
    this->type = src.type;
    return (*this);
}

void AAnimal::makeSound() const
{
    std::cout << "????" << std::endl;
}

std::string AAnimal::getType() const
{
    return(type);
}