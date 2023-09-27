/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:11:52 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 10:25:18 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::Fire(): AMateria("fire")
{
    std::cout << "Default Fire constructor called" << std::endl;
}

Fire::Fire(Fire const &src): AMateria("Fire")
{
    std::cout << "Fire copy constructor called" << std::endl;
    this->_type = src._type;
}

Fire &Fire::operator=(Fire const &src)
{
    if (this == &src)
        return (*this);
    this->_type = src._type;
    return (*this);
}

Fire::~Fire()
{
    std::cout << "Fire destructor called" << std::endl;
}

AMateria *Fire::clone() const
{
    return (new Fire(*this));
}

void Fire::use(ICharacter &target)
{
    std::cout << "* throws fire at " << target.getName() << " *" << std::endl;
}