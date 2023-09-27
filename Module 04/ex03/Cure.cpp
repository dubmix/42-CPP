/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:09:32 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 08:22:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    
}

Cure::Cure(Cure const &src): AMateria("cure")
{
    std::cout << "Cure copy constructor called" << std::endl;
    this->_type = src._type;
}

Cure &Cure::operator=(Cure const &src)
{
    if (this == &src)
        return (*this);
    this->_type = src._type;
}

Cure::~Cure()
{
    
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}