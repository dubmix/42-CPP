/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:15:38 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 08:00:46 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {std::cout << "Intern constructor called" << std::endl;}

Intern::~Intern() {std::cout << "Intern destructor called" << std::endl;}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern &Intern::operator=(Intern const &src)
{
    (void)src;
    return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *form;
    std::string formNames[] = {"robotomy request", "presidential pardon",
    "shrubbery creation"};

    try {
        for (int i = 0; i < 3; i++)
            if (name == formNames[i])
                throw Intern::FormExists(i);
        throw Intern::InvalidForm();
    }
    catch (Intern::FormExists const &e)
    {
        int i = e.getIndex();
        //switch
        if (i == 0)
            form = new RobotomyRequestForm(target);
        else if (i == 1)
            form = new PresidentialPardonForm(target);
        else if (i == 2)
            form = new ShrubberyCreationForm(target);
    }
    catch (Intern::InvalidForm const &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (form);
}
