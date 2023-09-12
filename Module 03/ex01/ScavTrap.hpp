/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:44:04 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/11 15:56:18 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(ScavTrap const &copy);
            ~ScavTrap();
            
            ScavTrap &operator=(ScavTrap const &copy);

            void    guardGate(void);
};

#endif