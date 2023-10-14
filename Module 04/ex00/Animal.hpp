/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:27:38 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/14 13:02:40 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:
            Animal();
            Animal(Animal const &src);
            virtual ~Animal();
            
            Animal &operator=(Animal const &src);
            
            virtual void makeSound() const;
            virtual std::string getType() const;

    protected:
            std::string type;
};

#endif