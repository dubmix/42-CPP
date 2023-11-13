/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:17:21 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 07:43:17 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
    std::cout << "Amateria copy constructor called" << std::endl;
    this->_type = src._type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

AMateria *AMateria::clone() const
{
    return ((AMateria*)this);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "Materia " << this->_type << " used on " << target.getName() << std::endl;
}