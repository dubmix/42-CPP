/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:34:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/14 08:15:04 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ScavTrap.hpp"
//#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap bang("Bang");
    
    bang.whoAmI();
    bang.attack("a bad guy");
    std::cout << std::endl;
    
    return (0);
}