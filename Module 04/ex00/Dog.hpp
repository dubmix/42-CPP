/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:12:15 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/27 12:00:03 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
    public:
            Dog();
            Dog(Dog const &src);
            ~Dog();

            Dog &operator=(Dog const &src);

            void makeSound() const;
};

#endif