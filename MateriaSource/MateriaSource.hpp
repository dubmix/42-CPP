/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:34:08 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 08:40:01 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
            MateriaSource();
            MateriaSource(MateriaSource const &src);
            ~MateriaSource();

            MateriaSource &operator=(MateriaSource const &src);

            void learnMateria(AMateria *m);
            AMateria *createMateria(std::string const &type);
            AMateria *getMateria(std::string const &type);

    private:
            AMateria *materias[4];
};

#endif