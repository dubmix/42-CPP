/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 06:56:51 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/02 09:09:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(Serializer const &src) {(void)src;}

//Serializer &

uintptr_t Serializer::serialize(Data *data) {return (reinterpret_cast<uintptr_t>(data));}

Data *Serializer::deserialize(uintptr_t data) {return (reinterpret_cast<Data*>(data));}

void Serializer::printData(Data *data)
{
    std::cout << data->name << std::endl;
    std::cout << data->type << std::endl;
    std::cout << data->height << std::endl;
    std::cout << data->weight << std::endl;
    std::cout << data->spawn << std::endl;
}
