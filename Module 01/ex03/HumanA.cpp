/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:38:08 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 13:20:49 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << "Human A " << name << " was created with ";
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->_name << " was destroyed" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with ";
    std::cout << this->_weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}
