/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:44:04 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/02 08:59:14 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
            ScavTrap();
            ScavTrap(std::string const &name);
            ~ScavTrap();

            void    attack(std::string const &target);
            void    guardGate(void);

    protected:
            std::string _name;
            int _hitPoints;
            int _energyPoints;
            int _attackDamage;
};

#endif