/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:19:07 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/16 07:41:47 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat a("Ursula", 1);
    Bureaucrat b("Klaus", 150); // try to create an exception here, will segfault
    Bureaucrat c("Wolfgang", 60);
    std::cout << std::endl;

    Form form("Mietschuldenfreiheitsbescheinigung", 40, 150);
    std::cout << form << std::endl;

    std::cout << "Status: " << form.getSignedStatus() << std::endl;
    c.signForm(form);
    std::cout << "Status: " << form.getSignedStatus() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Status: " << form.getSignedStatus() << std::endl;
    a.signForm(form);
    std::cout << "Status: " << form.getSignedStatus() << std::endl;
    std::cout << std::endl;

    try {
        Form fail("Will fail", 0, 150);
        Form fail2(fail);

        std::cout << fail.getName() << std::endl;
        std::cout << fail2.getExecLevel() << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception const &e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    return (0);
}
