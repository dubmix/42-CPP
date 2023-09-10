/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:36:03 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 13:36:01 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    public:
            Weapon(std::string type);
            Weapon(void);
            ~Weapon(void);
            const std::string  getType(void);
            void               setType(std::string type);

    private:
            std::string _type;
};

#endif
