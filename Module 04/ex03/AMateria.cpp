/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:17:21 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 09:24:39 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    
}

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria *AMateria::clone() const
{
    return ((AMateria*)this);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}