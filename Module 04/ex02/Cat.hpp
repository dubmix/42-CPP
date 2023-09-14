/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:34:00 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 08:10:46 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
    public:
            Cat();
            Cat(Cat const &copy);
            ~Cat();

            Cat &operator=(Cat const &copy);

            void makeSound() const;
            Brain *getBrain() const;

    private:
            Brain *_brain;
};

#endif