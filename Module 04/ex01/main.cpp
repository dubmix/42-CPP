/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:22:00 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 08:25:30 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *i = new Dog();
    const Animal *j = new Cat();
    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    std::cout << std::endl;

    delete i;
    delete j;
    std::cout << std::endl;

    const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    std::cout << std::endl;

    animals[0]->makeSound();
    animals[1]->makeSound();
    animals[2]->makeSound();
    animals[3]->makeSound();
    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
        delete animals[i];

    return (0);
}