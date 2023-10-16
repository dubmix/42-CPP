/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:07:04 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 15:47:46 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &str, Bureaucrat &b)
{
    str << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (str);
}

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    std::cout << "Bureaucrat " << name << " constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->_name << " destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name)
{
    this->_grade = src._grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    if (this == &src)
        return (*this);
    this->_grade = src._grade;
    return (*this);
}

std::string Bureaucrat::getName()
{
    return (this->_name);
}

int Bureaucrat::getGrade()
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= 1;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += 1;
}
