/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:37:51 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 13:26:14 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    public:
            HumanB(std::string name);
            ~HumanB(void);
            void    attack(void);
            void    setWeapon(Weapon &weapon);

    private:
            std::string _name;
            Weapon *_weapon;
};

#endif
