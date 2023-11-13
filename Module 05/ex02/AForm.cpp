/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:30:52 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 08:17:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

std::ostream &operator<<(std::ostream &str, AForm &f)
{
    str << "Form name: " << f.getName() << std::endl;
    str << "Grade to sign: " << f.getSignLevel() << std::endl;
    str << "Grade to execute: " << f.getExecLevel() << std::endl;
    return (str);
}

AForm::AForm(): _name("Default"), _sign3d(0), _signLevel(150), _execLevel(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signLevel, int execLevel): _name(name), _sign3d(0),
_signLevel(signLevel), _execLevel(execLevel)
{
    std::cout << "Form constructor called" << std::endl;
    if (signLevel < 1)
        throw AForm::GradeTooHighException();
    else if (signLevel > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src): _signLevel(src._signLevel), _execLevel(src._execLevel)
{
    this->_sign3d = src._sign3d;
}

AForm::~AForm()
{
    std::cout << "Form destructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &src)
{
    if (this == &src)
        return (*this);
    // this->_signLevel = src._signLevel;
    // this->_execLevel = src._execLevel;
    this->_sign3d = src._sign3d;
    return (*this);
}

std::string const AForm::getName() const
{
    return(this->_name);
}

bool AForm::getSignedStatus() const
{
    return(this->_sign3d);
}

int AForm::getSignLevel() const
{
    return(this->_signLevel);
}

int AForm::getExecLevel() const
{
    return(this->_execLevel);
}

void AForm::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > this->_signLevel)
        throw AForm::GradeTooLowException(); // exits the code and propagates
    else
        _sign3d = 1;
}
