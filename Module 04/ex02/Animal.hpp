/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:27:38 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 08:41:53 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
    public:
            Animal();
            Animal(Animal const &copy);
            virtual ~Animal(void);
            
            Animal &operator=(Animal const &copy);
            
            virtual void makeSound() const = 0;
            virtual std::string getType() const;

    protected:
            std::string type;
};

#endif