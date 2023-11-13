/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 08:17:59 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 15:34:29 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *horde = new Zombie[n];
    for (int i = 0; i < n; i++)
        horde[i].setName(name);
    return (horde);
}