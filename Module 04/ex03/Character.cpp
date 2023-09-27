/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 07:14:53 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 07:57:02 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name): _name(name)
{
    std::cout << "Character " << this->_name << " was created" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
    std::cout << "Character " << this->_name << " copy constructor called" << std::endl;
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = src._inventory[i];
}

Character &Character::operator=(Character const &src)
{
    if (this == &src)
        return (*this);
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = src._inventory[i];
    return (*this);
}

Character::~Character()
{
    std::cout << "Character " << this->_name << " was destroyed" << std::endl;
    // free allocated memory?
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Character " << this->_name;
            std::cout << " equipped with " << m->getType() << std::endl;
            return ;
        }
    }
    std::cout << "Character " << this->_name << " can't equip " << m->getType() << "...";
    std::cout << " They can't hold more than 4 materias!" << std::endl;
}

void Character::unequip(int idx)
{
    if (this->_inventory[idx])
    {
        std::cout << "Character " << this->_name << " unequipped ";
        std::cout << _inventory[idx]->getType() << std::endl; 
        delete (this->_inventory[idx]);
        this->_inventory[idx] = NULL;
    }
    else
        std::cout << "Character " << this->_name << " can't unequip materia" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_inventory[idx])
    {
        std::cout << "Character " << this->_name << " uses ";
        std::cout << this->_inventory[idx]->getType() << std::endl;
        this->_inventory[idx]->use(target);
    }
    else
        std::cout << "Character " << this->_name << " can't use materia" << std::endl;
}