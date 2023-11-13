/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:34:00 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/14 13:03:02 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
    public:
            Cat();
            Cat(Cat const &src);
            ~Cat();

            Cat &operator=(Cat const &src);

            void makeSound() const;
};

#endif