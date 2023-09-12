/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:39:12 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/12 09:03:28 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
            FragTrap();
            FragTrap(std::string const &name); // why &
            FragTrap(FragTrap const &copy);
            ~FragTrap();

            FragTrap &operator=(FragTrap const &copy);

            void    attack(std::string const &target);
            void    highFivesGuys(void);
};

#endif