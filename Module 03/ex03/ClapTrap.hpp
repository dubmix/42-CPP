/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:03 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/12 08:32:05 by pdelanno         ###   ########.fr       */
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
        ClapTrap(ClapTrap const &copy);
        ~ClapTrap();

        ClapTrap &operator=(ClapTrap const &copy);
        
        virtual void attack(std::string const &target);
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