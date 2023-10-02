/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 06:56:54 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/02 09:07:22 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP

# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
    std::string name;
    std::string type;
    std::string height;
    std::string weight;
    std::string spawn;
};

class Serializer
{
    public:
            
            static uintptr_t serialize(Data *data);
            static Data      *deserialize(uintptr_t data);
            static void      printData(Data *data);

    private:
            Serializer();
            Serializer(Serializer const &src);
            ~Serializer();

            //Serializer &operator=(Serializer const &src);
};

#endif