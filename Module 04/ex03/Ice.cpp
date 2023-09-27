/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:24:54 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 08:26:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    
}

Ice::Ice(Ice const &src): AMateria("ice")
{
    std::cout << "Ice copy constructor called" << std::endl;
    this->_type = src._type;
}

Ice &Ice::operator=(Ice const &src)
{
    if (this == &src)
        return (*this);
    this->_type = src._type;
}

Ice::~Ice()
{
    
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}