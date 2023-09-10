/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:38:08 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 10:51:04 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    std::cout << "HumanA " << name << " was created with ";
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->_name << " was destroyed" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->_weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}
