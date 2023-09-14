/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:47:43 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/14 06:47:20 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int get_index(char *argv)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
        if (levels[i] == argv)
            return (i);
    return (-1);
}   
void harl_switch(char *argv, Harl &Harl)
{
    switch (get_index(argv))
    {
        case 0:
            Harl.complain("DEBUG");
            Harl.complain("INFO");
            Harl.complain("WARNING");
            Harl.complain("ERROR");
            break ;
        case 1:
            Harl.complain("INFO");
            Harl.complain("WARNING");
            Harl.complain("ERROR");
            break ;
        case 2:
            Harl.complain("WARNING");
            Harl.complain("ERROR");
            break ;
        case 3:
            Harl.complain("ERROR");
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Program needs one filter parameter" << std::endl;
        return (1);
    }
    
    Harl Harl;
    harl_switch(argv[1], Harl);
    return (0);
}