/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:10:32 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 07:00:21 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

# include "ICharacter.hpp"

class AMateria
{
    protected:
            std::string _type;

    public:
            AMateria();
            AMateria(std::string const &type);
            AMateria(AMateria const &src);
            virtual ~AMateria();

            std::string const &getType() const;
            virtual AMateria *clone() const = 0;
            virtual void use(ICharacter &target);
};

#endif