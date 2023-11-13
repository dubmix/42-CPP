/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:39:08 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/23 07:46:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
    std::cout << "ClapTrap " << this->_name << " transformed into an even mightier FragTrap!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " was destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::string str;
    
    std::cout << "FragTrap " << this->_name << " requests high five!" << std::endl;
    std::cout << "Give high five? > ";
    std::getline (std::cin, str);
    if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
    if (str == "no" || str == "NO" || str == "n")
    {
        std::cout << "😢" << std::endl;
    }
    else
        std::cout << "Nice!" << std::endl;
}

void    FragTrap::attack(std::string const &target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name;
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->_attackDamage;
    std::cout << " points of damage!" << std::endl;
    _energyPoints -= 1;
}