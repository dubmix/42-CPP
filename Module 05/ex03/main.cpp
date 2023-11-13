/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:19:07 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 11:45:56 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat a("Ursula", 1);
    Bureaucrat b("Klaus", 26);
    Bureaucrat c("Wolfgang", 140);
    Intern d;
    AForm *f;
    std::cout << std::endl;
    
    // {"robotomy request", "presidential pardon", "shrubbery creation"};
    f = d.makeForm("robotomy request", "Elon Musk");
    std::cout << *f << std::endl;

    c.signForm(*f); //change bureaucrat to c
    a.signForm(*f);
    a.signForm(*f);
    a.executeForm(*f);
    std::cout << std::endl;
    
    delete f;
}