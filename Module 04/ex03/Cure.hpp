/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:03:39 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 08:07:27 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
            Cure();
            Cure(Cure const &src);
            ~Cure();

            Cure &operator=(Cure const &src);

            virtual AMateria *clone() const;
            virtual void use(ICharacter &target);
};

#endif