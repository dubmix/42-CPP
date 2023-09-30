/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 08:47:08 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 11:17:18 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
AForm(src), _target(src._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    if (this == &src)
        return (*this);
    this->_target = src._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecLevel())
        throw AForm::GradeTooLowException();
    else if (this->getSignedStatus() != 1)
        throw AForm::NotSignedException();
    else
    {
        std::srand(std::time(0));
        int i = rand() % 2;
        
        std::cout << executor.getName() << " executed " << this->getName() << std::endl;
        if (i == 0)
        {
            std::cout << "*** drilling noises ***" << std::endl;
            std::cout << _target << " has been robotomized" << std::endl;
        }
        else
        {
            std::cout << "Robotomization on " << _target;
            std::cout << " has failed" << std::endl;
        }
    }
}