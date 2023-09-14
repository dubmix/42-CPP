/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:58:15 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/14 08:32:18 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name)
{
    std::cout << "ClapTrap " << this->_name << " transformed into a mighty ScavTrap!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
    std::cout << "ScavTrap copy called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " was destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
    std::cout << "Assignment operator for ScavTrap called" << std::endl;
    ScavTrap::operator=(copy);
    return(*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode!" << std::endl;
}

void    ScavTrap::attack(std::string const &target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name;
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->_attackDamage;
    std::cout << " points of damage!" << std::endl;
    _energyPoints -= 1;
}