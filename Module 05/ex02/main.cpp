/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:19:07 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 07:49:42 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat a("Ursula", 1);
    Bureaucrat b("Klaus", 26);
    Bureaucrat c("Wolfgang", 140);
    PresidentialPardonForm f1("Kim Dotcom");
    RobotomyRequestForm f2("Kim Dotcom");
    ShrubberyCreationForm f3("thebesttimeoftheyear");
    std::cout << std::endl;

    try {
        a.signForm(f3);
        a.executeForm(f3);
    }
    catch (AForm::NotSignedException const &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (AForm::GradeTooLowException const &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException const &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    return (0);
}