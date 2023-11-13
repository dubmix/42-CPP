/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:00 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/14 11:28:30 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    this->_name = name;
    std::cout << "ClapTrap " << name << " was created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
    if (this == &src)
        return (*this);
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return (*this);
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