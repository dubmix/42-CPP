/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:30:52 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 18:13:14 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _signLevel(150), _execLevel(150), _sign3d(0)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(int signLevel, int execLevel): _signLevel(signLevel), _execLevel(execLevel)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const &src): _signLevel(src._signLevel), _execLevel(src._execLevel)
{
    this->_sign3d = src._sign3d;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(Form const &src): _signLevel(src._signLevel)
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

int const Form::getSignLevel()
{
    return(this->_signLevel);
}

int const Form::getExecLevel()
{
    return(this->_execLevel);
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() < this->_signLevel)
    {
        throw Form::GradeTooLowException();
        return ;
    }
    else
        _sign3d = 1;
}
