/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:15:55 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 07:58:44 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class Intern
{
    public:
            Intern();
            Intern(Intern const &src);
            ~Intern();

            Intern &operator=(Intern const &src);

            AForm *makeForm(std::string const name, std::string const target);

            class FormExists: public std::exception
            {
                public:
                        FormExists(int i): index(i) {}
                        int getIndex() const {return (index);}
                private:
                        int index;
            };
            
            class InvalidForm: public std::exception
            {
                public:
                        virtual const char* what() const throw()
                        {return ("Form doesn't exist!");}
            };
};

#endif