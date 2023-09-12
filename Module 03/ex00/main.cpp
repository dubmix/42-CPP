/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:34:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/11 15:36:47 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap bing("Bing");
    ClapTrap bong("Bong");
    
    for (int i = 0; i < 2; i++)
    {
        bing.attack("Bong");
        bong.takeDamage(1);
        bong.attack("Bing");
        bing.takeDamage(1);
    }
    bong.beRepaired(1);
    
    std::cout << "Bong's hitpoints: " << bong.getHitPoints() << std::endl;
    std::cout << "Bing's hitpoints: " << bing.getHitPoints() << std::endl;
    return (0);
}