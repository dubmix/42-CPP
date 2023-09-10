/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:36:14 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 10:34:51 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{ 
}

Weapon::~Weapon(void)
{   
}

const std::string Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}
