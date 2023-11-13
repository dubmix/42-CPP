/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:34:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/23 07:23:44 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap bing("Bing");
    ScavTrap bong("Bong");
    std::cout << std::endl;
    
    for (int i = 0; i < 2; i++)
    {
        bing.attack("Bong");
        bong.takeDamage(0);
        bong.attack("Bing");
        bing.takeDamage(20);
        std::cout << std::endl;
    }
    bong.guardGate();
    std::cout << std::endl;
    
    std::cout << "Bong's hitpoints: " << bong.getHitPoints() << std::endl;
    std::cout << "Bing's hitpoints: " << bing.getHitPoints() << std::endl;
    std::cout << std::endl;
    
    return (0);
}