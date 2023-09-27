/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:02:41 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 10:31:03 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP

# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria; //need class declaration

class ICharacter
{
    public:
            virtual ~ICharacter() {}
            virtual std::string const &getName() const = 0;
            virtual void equip(AMateria *m) = 0;
            virtual void unequip(int idx) = 0;
            virtual void use(int idx, ICharacter &target) = 0;
};

#endif