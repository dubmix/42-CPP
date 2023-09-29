/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:30:52 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/29 10:53:29 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream &operator<<(std::ostream &str, Form &f)
{
    str << "Form name: " << f.getName() << std::endl;
    str << "Grade to sign: " << f.getSignLevel() << std::endl;
    str << "Grade to execute: " << f.getExecLevel() << std::endl;
    return (str);
}

Form::Form(): _name("Default"), _sign3d(0), _signLevel(150), _execLevel(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int signLevel, int execLevel): _name(name), _sign3d(0),
_signLevel(signLevel), _execLevel(execLevel)
{
    std::cout << "Form constructor called" << std::endl;
    if (signLevel < 1)
        throw Form::GradeTooHighException();
    else if (signLevel > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src): _signLevel(src._signLevel), _execLevel(src._execLevel)
{
    this->_sign3d = src._sign3d;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(Form const &src)
{
    if (this == &src)
        return (*this);
    // this->_signLevel = src._signLevel;
    // this->_execLevel = src._execLevel;
    this->_sign3d = src._sign3d;
    return (*this);
}

std::string const Form::getName()
{
    return(this->_name);
}

bool Form::getSignedStatus()
{
    return(this->_sign3d);
}

int Form::getSignLevel() const
{
    return(this->_signLevel);
}

int Form::getExecLevel() const
{
    return(this->_execLevel);
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->_signLevel)
        throw Form::GradeTooLowException(); // exits the code and propagates
    else
        _sign3d = 1;
}
