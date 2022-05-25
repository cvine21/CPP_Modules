/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:54:24 by cvine             #+#    #+#             */
/*   Updated: 2022/05/25 13:18:10 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int		Account::_nbAccounts;
int		Account::_totalAmount;
int		Account::_totalNbDeposits;
int		Account::_totalNbWithdrawals;

void	Account::_displayTimestamp( void ) {

	time_t t = time(0);
    tm tm = *localtime(&t);
	
    std::cout << "[" << tm.tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << tm.tm_mon + 1 <<  tm.tm_mday << "-";
	std::cout << tm.tm_hour << tm.tm_min << tm.tm_sec << "]" << std::endl;

}

int		Account::getNbAccounts( void ) {return _nbAccounts;}
int		Account::getTotalAmount( void ) {return _totalAmount;}
int		Account::getNbDeposits( void ) {return _totalNbDeposits;}
int		Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}

// void	Account::displayAccountsInfos( void ) {
	
// }

// Account::Account( int initial_deposit ) {

// 	this->_accountIndex++;

// 	std::cout << "index: " << this->_accountIndex << ";";
// 	std::cout << "amount: " << initial_deposit << ";";
// 	std::cout << "created" << std::endl;
	
// }

// Account::~Account( void ) {}

// void	Account::makeDeposit( int deposit ) {};

// bool	Account::makeWithdrawal( int withdrawal ) {};

// int		Account::checkAmount( void ) const {};

// void	Account::displayStatus( void ) const {};


// int	getTotalAmount( void );
// int	getNbDeposits( void );
// int	getNbWithdrawals( void );

// int main() {

// 	// std::cout << Account::getNbAccounts() << std::endl;

// 	return 0;

// }