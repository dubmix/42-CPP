/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:41:33 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 09:56:28 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Default MateriaSource constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = src.materias[i];
} 

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
    if (this == &src)
        return (*this);
    for (int i = 0; i < 4; i++)
        this->materias[i] = src.materias[i];
    return (*this);    
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
            delete(this->materias[i]);
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m;
            std::cout << "MateriaSource: materia learned" << std::endl;
            return ;
        }
    }
    std::cout << "MateriaSource can't learn" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && materias[i]->getType() == type)
            return (materias[i]->clone());
    }
    return (NULL);
}

AMateria *MateriaSource::getMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && materias[i]->getType() == type)
            return (materias[i]);
    }
    return (NULL);
}