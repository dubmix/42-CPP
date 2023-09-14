/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:22:00 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 08:42:43 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    //const Animal *meta = new Animal();
    const Animal *i = new Dog();
    const Animal *j = new Cat();
    
    std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << std::endl;

    delete i;
    delete j;

    return (0);
}