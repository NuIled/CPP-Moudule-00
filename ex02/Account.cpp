/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:57:29 by aoutifra          #+#    #+#             */
/*   Updated: 2023/09/21 01:35:00 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>

#define Log(x) std::cout << x << std::endl;


void	Account::makeDeposit( int deposit )
{
    this->_amount += deposit;
    displayAccountsInfos();
    _displayTimestamp();
}

bool	Account::makeWithdrawal( int withdrawal)
{
    if (withdrawal >= 0)
        {
            this->_amount = withdrawal;
            return true;
        }
    return false;
}

int	Account::checkAmount(void) const
{
    Log(this->_amount);
    return (this->_amount);
}

int Account::getNbAccounts( void ) { return (_nbAccounts); }
int Account::getNbDeposits( void ) { return (_totalNbDeposits);}
int Account::getNbWithdrawals( void ) { return (_totalNbDeposits);}
int Account::getTotalAmount( void ) { return (_totalNbDeposits);}


void	Account::displayStatus(void) const
{
    Log(this->_accountIndex);
    checkAmount();
    getNbDeposits();
    getNbWithdrawals();
}

void	Account::displayAccountsInfos(void)
{
    getTotalAmount();
    getNbWithdrawals();
    getNbDeposits();
}

Account::Account(int initial_deposit) {
    makeDeposit(initial_deposit);
}

Account::~Account(void) {
		// Destructor implementation
}
