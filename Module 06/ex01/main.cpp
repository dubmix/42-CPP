/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 06:56:14 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/02 09:09:05 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// int main(void)
// {
//     Data        *data = new Data;

//     data->name = "Snorlax";
//     data->type = "Normal";
//     data->height = "2.1m";
//     data->weight = "460kg";
//     data->spawn = "Celadon City";

//     std::cout << "Original data:" << std::endl;
//     printData(data);
//     std::cout << std::endl;

//     std::cout << "Original pointer:" << std::endl;
//     std::cout << data << std::endl;
//     std::cout << std::endl;

//     std::cout << "Serialized data:" << std::endl;
//     std::cout << serialize(data) << std::endl;
//     std::cout << std::endl;

//     std::cout << "Deserialized data pointer:" << std::endl;
//     std::cout << deserialize(serialize(data)) << std::endl;
//     std::cout << std::endl;

//     std::cout << "Deserialized data:" << std::endl;
//     printData(data);

//     delete data;
//     return (0);
// }

int main(void)
{
    //Serializer  Pokedex;
    Data        *data = new Data;

    data->name = "Snorlax";
    data->type = "Normal";
    data->height = "2.1m";
    data->weight = "460kg";
    data->spawn = "Celadon City";

    std::cout << "Original data:" << std::endl;
    //Pokedex.printData(data);
    Serializer::printData(data);
    std::cout << std::endl;

    std::cout << "Original pointer:" << std::endl;
    std::cout << data << std::endl;
    std::cout << std::endl;

    std::cout << "Serialized data:" << std::endl;
    std::cout << Serializer::serialize(data) << std::endl;
    std::cout << std::endl;

    std::cout << "Deserialized data pointer:" << std::endl;
    std::cout << Serializer::deserialize(Serializer::serialize(data)) << std::endl;
    std::cout << std::endl;

    std::cout << "Deserialized data:" << std::endl;
    Serializer::printData(data);

    delete data;
    return (0);
}
