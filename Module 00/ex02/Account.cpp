/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:47:21 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/07 13:47:24 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    this->_accountIndex = this->getNbAccounts();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << initial_deposit;
    std::cout << ";created" << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t time;
    char timestamp[9];
    char timestr[9];

    time = std::time(NULL);
    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d", std::localtime(&time));
    std::strftime(timestr, sizeof(timestr), "%H%M%S", std::localtime(&time));
    std::cout << "[" << timestamp << "_" << timestr << "]";
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << checkAmount();
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << checkAmount();
    std::cout << ";deposit:" << deposit;
    this->_amount += deposit;
    _totalAmount += deposit;
    std::cout << ";amount:" << checkAmount();
    this->_nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << ";nb_deposits:" << this->_nbDeposits;
    std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << checkAmount();
    std::cout << ";withdrawal:";
    if ((this->_amount - withdrawal) < 0)
    {
        std::cout << "refused" << std::endl;
        return (1);
    }
    std::cout << withdrawal;
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << ";amount:" << checkAmount();
    this->_nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
    return(0);
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals();
    std::cout << std::endl;
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}
