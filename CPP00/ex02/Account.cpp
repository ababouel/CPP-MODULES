/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:13:12 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/13 19:04:04 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"


int  Account::getNbAccounts( void )
{
    return  (t::_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return  (t::_totalAmount);
}

int Account::getNbDeposits( void )
{
    return  (t::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return  (t::_totalNbWithdrawals);
}

void    Account::displayStatus( void ) const
{
    char timestamp[50];
    std::time_t time = std::time(nullptr);
    std::strftime(timestamp, 30, "[%H:%M:%S]", std::localtime(&time));
    std::cout << "[" << timestamp << "]";
}

void    Account::displayAccountsInfos( void )
{
    t::_displayTimestamp();
    std::cout << " accounts:"<< t::getNbAccounts << ";";
    std::cout << "total:"<< t::getTotalAmount << ";";
    std::cout << "deposits:"<< t::getNbDeposits << ";";
    std::cout << "withdrawals:"<< t::getNbWithdrawals << std::endl;
}

 Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    t::_displayTimestamp(); 
    std::cout << " index:"<< this->_accountIndex << ";";
    std::cout << " amount:"<< this->_amount << ";";
    std::cout << "created" << std::endl; 
    this->_accountIndex++;
}

Account::~Account( void )
{
    t::_displayTimestamp(); 
    std::cout << " index:"<< this->_accountIndex << ";";
    std::cout << " amount:"<< this->_amount << ";";
    std::cout << "closed" << std::endl;  
}

void Account::makeDeposit( int deposit )
{
    this->_amount += deposit;
    Account::_totalAmount += deposit;

}
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;