/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:34:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/12 09:10:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap bong("Bong");
    FragTrap bing("Bing");
    
    std::cout << std::endl;
    bong.guardGate();
    bing.attack("Bong");
    bong.takeDamage(30);
    bong.attack("Bing");
    bing.takeDamage(20);
    bing.highFivesGuys();
    std::cout << std::endl;
    bing.attack("Bong");
    bong.takeDamage(30);
    std::cout << std::endl;
    
    std::cout << "Bong's hitpoints: " << bong.getHitPoints() << std::endl;
    std::cout << "Bing's hitpoints: " << bing.getHitPoints() << std::endl;
    return (0);
}