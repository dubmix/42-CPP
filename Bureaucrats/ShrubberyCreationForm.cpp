/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:13:39 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 10:11:27 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
AForm(src), _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    if (this == &src)
        return (*this);
    this->_target = src._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecLevel())
        throw AForm::GradeTooLowException();
    else if (this->getSignedStatus() != 1)
        throw AForm::NotSignedException();
    else
    {
        std::cout << executor.getName() << " executed " << this->getName() << std::endl;
        std::ofstream file((_target + "_shrubbery").c_str());
        file <<
        "        ^        \n"
        "       ^^^       \n"
        "      ^^^o^      \n"
        "     ^^^^^^^     \n"
        "    ^^^^^^^^^    \n"
        "   ^^o^^^^^^^^   \n"
        "  ^^^^^^^^^^^^^  \n"
        " ^^^^^^^^^^^o^^^ \n"
        "        |        \n";
        file.close();
    }
}