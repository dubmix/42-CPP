/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:30:58 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/29 10:00:23 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
            std::string const _name;
            bool _sign3d;
            int const _signLevel;
            int const _execLevel;

    public:
            Form();
            Form(std::string name, int signLevel, int execLevel);
            Form(Form const &src);
            ~Form();

            Form &operator=(Form const &src);

            std::string const   getName();
            bool                getSignedStatus();
            int                 getSignLevel() const;
            int                 getExecLevel() const;
            void                beSigned(Bureaucrat &b);
    
            class GradeTooHighException: public std::exception
            {
                public:
                        virtual const char* what()
                        {return ("Grade too high");}
            };
            
            class GradeTooLowException: public std::exception
            {
                public:
                        virtual const char* what()
                        {return ("grade too low!");}
            };
};

std::ostream &operator<<(std::ostream &str, Form &f);

#endif