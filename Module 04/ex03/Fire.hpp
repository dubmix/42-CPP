/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:13:55 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 10:14:18 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP

# define FIRE_HPP

# include "AMateria.hpp"

class Fire: public AMateria
{
    public:
            Fire();
            Fire(Fire const &src);
            ~Fire();

            Fire &operator=(Fire const &src);

            virtual AMateria *clone() const;
            virtual void use(ICharacter &target);
};

#endif