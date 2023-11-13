/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:37:37 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 14:51:46 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
            HumanA(std::string name, Weapon &weapon);
            ~HumanA(void);
            void    attack(void);
            void    setWeapon(Weapon weapon);

    private:
            std::string _name;
            Weapon &_weapon;
};

#endif