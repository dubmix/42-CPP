/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:53:08 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 10:33:01 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Fire.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    std::cout << std::endl;
    src->learnMateria(new Ice());
    std::cout << std::endl;
    src->learnMateria(new Cure());
    std::cout << std::endl;
    src->learnMateria(new Fire());
    std::cout << std::endl;

    ICharacter *randomDude = new Character("random dude");
    std::cout << std::endl;

    AMateria *tmp;
    tmp = src->createMateria("ice");
    randomDude->equip(tmp);
    tmp = src->createMateria("cure");
    randomDude->equip(tmp);
    tmp = src->createMateria("fire");
    randomDude->equip(tmp);
    std::cout << std::endl;

    ICharacter *bob = new Character("Bob");
    std::cout << std::endl;

    randomDude->use(0, *bob);
    randomDude->use(1, *bob);
    randomDude->use(2, *bob);
    std::cout << std::endl;

    randomDude->unequip(1);
    std::cout << std::endl;

    delete bob;
    std::cout << std::endl;
    delete randomDude;
    std::cout << std::endl;
    delete src;

    return (0);
}