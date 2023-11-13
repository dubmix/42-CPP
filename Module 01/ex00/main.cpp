/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 06:49:10 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 06:49:26 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void    randomChump(std::string name);

int main(void)
{
    Zombie *z;

    z = newZombie("Roger");
    z->announce();
    randomChump("Bernard");
    delete z;
}
