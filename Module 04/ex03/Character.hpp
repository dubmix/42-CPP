/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 07:05:14 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 07:14:21 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
    public:
            Character(std::string const &name);
            Character(Character const &src);
            ~Character();

            Character &operator=(Character const &src);

            std::string const &getName() const;
            void equip(AMateria *m);
            void unequip(int idx);
            void use(int idx, ICharacter &target);
    
    private:
            std::string _name;
            AMateria *_inventory[4];
};

#endif