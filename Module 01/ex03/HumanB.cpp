/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:38:30 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 10:45:30 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
    this->_name = name;
    std::cout << "HumanB " << name << " was created with no weapon" << std::endl;    
}

HumanB::~HumanB(void)
{
    std::cout << this->_name << " was destroyed" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}



