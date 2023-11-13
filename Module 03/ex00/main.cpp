/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:34:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/14 09:52:52 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap bing("Bing");
    ClapTrap bong("Bong");
    ClapTrap beng(bong);
    ClapTrap bang;

    std::cout << "Bang's name: " << bang.getName() << std::endl; 
    bang = beng;
    std::cout << std::endl;
    
    for (int i = 0; i < 2; i++)
    {
        bing.attack("Bong");
        bong.takeDamage(1);
        bong.attack("Bing");
        bing.takeDamage(1);
    }
    bong.beRepaired(1);
    std::cout << std::endl;
    
    std::cout << "Bong's hitpoints: " << bong.getHitPoints() << std::endl;
    std::cout << "Bing's hitpoints: " << bing.getHitPoints() << std::endl;
    std::cout << "Beng's hitpoints: " << beng.getHitPoints() << std::endl;
    std::cout << "Bang's hitpoints: " << bang.getHitPoints() << std::endl;
    std::cout << "Beng's name: " << beng.getName() << std::endl;
    std::cout << "Bang's name: " << bang.getName() << std::endl; 
    std::cout << std::endl;
    return (0);
}