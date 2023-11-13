/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 08:17:07 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 15:32:11 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name);

int main(void)
{
    int n = 10;

    Zombie *horde = zombieHorde(n, "Jean-Marc");
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete [] horde;
}