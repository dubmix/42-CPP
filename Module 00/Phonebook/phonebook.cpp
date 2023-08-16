/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:12:51 by pdelanno          #+#    #+#             */
/*   Updated: 2023/08/16 17:12:52 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->_index = 0;
    std::cout << "\033[1m\U0001F48B Welcome to minitel...\033[0m";
	std::cout << std::endl;
	std::cout << "\033[1mYou can ADD, SEARCH or EXIT...\033[0m";
	std::cout << std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "\033[1mBye... See you soon \U0001F48B\n\033[0m";
}

void    Phonebook::add(void)
{
    std::string str;
    int         i;

    i = 0;
    std::cout << "Enter first name: ";
    if (std::getline(std::cin, str) && str != "")
        this->_contacts[this->_index % 8].set_data(str, i);
    i++;
    std::cout << "Enter last name: ";
    if (std::getline(std::cin, str) && str != "")
        this->_contacts[this->_index % 8].set_data(str, i);
    i++;
    std::cout << "Enter nickname: ";
    if (std::getline(std::cin, str) && str != "")
        this->_contacts[this->_index % 8].set_data(str, i);
    i++;
    std::cout << "Enter phone number: ";
    if (std::getline(std::cin, str) && str != "")
        this->_contacts[this->_index % 8].set_data(str, i);
    i++;
    std::cout << "Enter darkest secret: ";
    if (std::getline(std::cin, str) && str != "")
        this->_contacts[this->_index % 8].set_data(str, i);
    std::cout << "\033[1;35mContact added \U0001F609\033[0m";
    std::cout << std::endl;
    this->_index++;
}
