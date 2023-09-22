/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:44:04 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/14 11:27:06 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
            ScavTrap();
            ScavTrap(std::string const &name);
            ScavTrap(ScavTrap const &src);
            ~ScavTrap();
            
            ScavTrap &operator=(ScavTrap const &src);

            void    attack(std::string const &target);
            void    guardGate(void);
};

#endif