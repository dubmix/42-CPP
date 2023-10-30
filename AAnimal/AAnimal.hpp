/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:27:38 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 07:20:16 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP

# define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{
    public:
            AAnimal();
            AAnimal(AAnimal const &src);
            virtual ~AAnimal(void);
            
            AAnimal &operator=(AAnimal const &src);
            
            virtual void makeSound() const = 0;
            // instantiable = an instance of that object can be created
            virtual std::string getType() const;

    protected:
            std::string type;
};

#endif