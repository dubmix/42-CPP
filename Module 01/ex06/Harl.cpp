/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:48:18 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 15:43:27 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "A wild Harl appears!" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Got away safely!" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*ptr[i])();
            break;
        }
    }
}

void Harl::debug(void)
{
    std::cout << "\"I love extra bacon!\"" << std::endl;
}

void Harl::info(void)
{
    std::cout << "\"Can't believe extra bacon costs extra money...\"" << std::endl;   
}

void Harl::warning(void)
{
    std::cout << "\"I think I deserve some extra bacon for free!\"" << std::endl;
}

void Harl::error(void)
{
    std::cout << "\"This is unacceptable. Call the manager NOW!\"" << std::endl;    
}