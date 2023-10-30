/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:30:58 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 07:55:42 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

# define AFORM_HPP

# include <iostream>
# include <cstdlib> // for random nb generator
# include <ctime> // for time
# include <fstream> // for file creation
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
            std::string const _name;
            bool _sign3d;
            int const _signLevel;
            int const _execLevel;

    public:
            AForm();
            AForm(std::string const name, int signLevel, int execLevel);
            AForm(AForm const &src);
            virtual ~AForm();

            AForm &operator=(AForm const &src);

            std::string const   getName() const;
            bool                getSignedStatus() const;
            int                 getSignLevel() const;
            int                 getExecLevel() const;
            void                beSigned(Bureaucrat const &b);

            virtual void        execute(Bureaucrat const &executor) const = 0;
    
            class GradeTooHighException: public std::exception
            {
                public:
                        virtual const char* what() const throw()
                        {return ("Grade too high");}
            };
            
            class GradeTooLowException: public std::exception
            {
                public:
                        virtual const char* what() const throw()
                        {return ("grade too low!");}
            };

            class NotSignedException: public std::exception
            {
                public:
                        virtual const char* what() const throw()
                        {return ("form not signed!");}
            };

            class FormAlreadySigned: public std::exception
            {
                public:
                        virtual const char* what() const throw()
                        {return ("form already signed!");}
            };
};

std::ostream &operator<<(std::ostream &str, AForm &f);

#endif