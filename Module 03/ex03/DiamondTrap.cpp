/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 07:08:28 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/25 13:43:58 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    
}

DiamondTrap::DiamondTrap(std::string const &name)
{
    this->_name = name;
    this->ClapTrap::_name = name + " _clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << this->_name << ", the almighty DIAMONDTRAP has been created! Crazy!! 🤪" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DIAMONDTRAP " << this->_name << " was destroyed" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << std::endl;
    std::cout << "DIAMONDTRAP name: " << this->_name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
    std::cout << "ClapTrap attack damage: " << ClapTrap::_attackDamage << std::endl;
    std::cout << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}