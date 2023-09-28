/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:19:07 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 14:40:52 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    //Bureaucrat a("Ursula", 1); // outside of try block for scope
    Bureaucrat b("Klaus", 150);
    Bureaucrat c("Wolfgang", 60);
    std::cout << std::endl;

    c.incrementGrade();
    
    try {
        Bureaucrat a("Ursula", 1);

        std::cout << a << std::endl;
        a.incrementGrade(); // propagating up the call stack
    }
    catch (Bureaucrat::GradeTooHighException &e) { // CONST for convention???
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }

    try {
        std::cout << b << std::endl;
        b.decrementGrade();
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }

    //std::cout << a << std::endl; // a not in the scope
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << std::endl;

    return (0);
}