/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:39:12 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/02 08:59:02 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap // virtual inheritance
// ensures that only one instance of the base class is used
{
    public:
            FragTrap();
            FragTrap(std::string const &name);
            ~FragTrap();

            void    attack(std::string const &target);
            void    highFivesGuys(void);
            
    protected:
            std::string _name;
            int _hitPoints;
            int _energyPoints;
            int _attackDamage;
};

#endif