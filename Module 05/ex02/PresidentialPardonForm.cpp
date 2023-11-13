/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 07:23:42 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 09:25:26 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
AForm(src), _target(src._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    if (this == &src)
        return (*this);
    this->_target = src._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecLevel())
        throw AForm::GradeTooLowException();
    else if (this->getSignedStatus() != 1)
        throw AForm::NotSignedException();
    else
    {
        std::cout << executor.getName() << " executed " << this->getName() << std::endl;
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox";
        std::cout << std::endl;
    }
}