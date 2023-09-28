/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:07:17 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 14:10:20 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include "iostream"

class Bureaucrat
{
    private:
            std::string _name;
            int _grade;

    public:
            Bureaucrat();
            Bureaucrat(std::string name, int grade);
            Bureaucrat(Bureaucrat const &src);
            ~Bureaucrat();

            Bureaucrat &operator=(Bureaucrat const &src);

            std::string getName();
            int getGrade();
            void incrementGrade();
            void decrementGrade();

            class GradeTooHighException: public std::exception
            {
                public:
                        virtual const char* what() // using what() for convention, it returns a char *
                        {return ("Grade too high");}
            };
            
            class GradeTooLowException: public std::exception
            {
                public:
                        virtual const char* what()
                        {return ("Grade too low");}
            };
};

std::ostream &operator<<(std::ostream &str, Bureaucrat &b);

#endif