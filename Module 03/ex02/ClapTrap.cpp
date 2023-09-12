/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:00 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/12 07:51:47 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    *this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

ClapTrap::ClapTrap(std::string name): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    this->_name = name;
    std::cout << "ClapTrap " << name << " was created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " was destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name;
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->_attackDamage;
    std::cout << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name;
    std::cout << " has suffered " << amount;
    std::cout << " points of damage!" << std::endl;
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name;
    std::cout << " is being repaired for ";
    std::cout << amount << " points!" << std::endl;
    _energyPoints -= 1;
    if (_hitPoints <= 10)
        _hitPoints += 1;
}

int ClapTrap::getHitPoints()
{
    return (this->_hitPoints);
}