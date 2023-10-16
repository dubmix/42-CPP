/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:07:17 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 15:50:33 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include "iostream"
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
            std::string const _name;
            int _grade;

    public:
            Bureaucrat();
            Bureaucrat(std::string const name, int grade);
            Bureaucrat(Bureaucrat const &src);
            ~Bureaucrat();

            Bureaucrat &operator=(Bureaucrat const &src);

            std::string getName() const;
            int getGrade() const;
            void incrementGrade();
            void decrementGrade();
            void signForm(AForm &f);

            void executeForm(AForm const &f) const;

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
                        {return ("Grade too low");}
            };
};

std::ostream &operator<<(std::ostream &str, Bureaucrat &b);

#endif