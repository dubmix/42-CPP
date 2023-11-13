/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:03 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/23 07:41:36 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap();

        ClapTrap &operator=(ClapTrap const &src);
        
        virtual void attack(std::string const &target); // this function is meant to be
        // overriden by derived classes, it can therefore have the exact same name and arguments
        // update: virtual keyword not necessary!
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        int getHitPoints();

    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif
