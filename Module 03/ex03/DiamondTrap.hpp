/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 06:58:35 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/23 07:53:07 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap // order is important: we want the attack function
                                                    // from ScavTrap but attack damage from FragTrap
{
    public:
            DiamondTrap();
            DiamondTrap(std::string const &name);
            ~DiamondTrap();

            void whoAmI();
            void attack(std::string const &target);
    private:
            std::string _name;
};

#endif