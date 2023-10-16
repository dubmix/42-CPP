/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:07:04 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 15:54:03 by pdelanno         ###   ########.fr       */
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

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
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

void Bureaucrat::signForm(AForm &f)
{
    try {
        f.beSigned(*this);
        std::cout << *this << " signed ";
        std::cout << f.getName() << std::endl;
    }
    catch (std::exception const &e) {
        std::cout << this->_name << " couldn't sign ";
        std::cout << ">>" << f.getName() << "<< because ";
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &f) const
{
    try {
        f.execute(*this);
    }
    catch (std::exception const &e)
    {
        std::cout << this->_name << " couldn't execute ";
        std::cout << ">>" << f.getName() << "<< because " << e.what() << std::endl;
    }
}