/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 08:17:42 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 08:17:43 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "New zombie was created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
    std::cout << "Existing zombie was named " << this->_name << std::endl;
}