/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:02:41 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 09:24:56 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP

# define ICHARACTER_HPP

# include <iostream>

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