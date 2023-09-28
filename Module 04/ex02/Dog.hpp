/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:12:15 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 07:25:53 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "AAnimal.hpp"

class Dog: public AAnimal
{
    public:
            Dog();
            Dog(Dog const &src);
            ~Dog();

            Dog &operator=(Dog const &src);

            void makeSound() const;
            Brain *getBrain() const;
    
    private:
            Brain *_brain;
};

#endif