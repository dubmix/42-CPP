/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:27:34 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 10:15:33 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
    public:
            Ice();
            Ice(Ice const &src);
            ~Ice();

            Ice &operator=(Ice const &src);

            virtual AMateria *clone() const;
            virtual void use(ICharacter &target);
};

#endif