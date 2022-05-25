/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:54:24 by cvine             #+#    #+#             */
/*   Updated: 2022/05/25 18:00:37 by cvine            ###   ########.fr       */
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
	std::cout << tm.tm_hour << tm.tm_min << tm.tm_sec << "] ";

}

int		Account::getNbAccounts( void ) {return _nbAccounts;}
int		Account::getTotalAmount( void ) {return _totalAmount;}
int		Account::getNbDeposits( void ) {return _totalNbDeposits;}
int		Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();

	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;

}

Account::Account( int initial_deposit ) 
: _accountIndex(0), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{

	this->_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created" << std::endl;
}

Account::~Account( void ) {

	this->_nbAccounts--;
	
	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "closed" << std::endl;

}

void	Account::makeDeposit( int deposit ) {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";

	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";

	if (this->_amount - withdrawal < 0) {
		std::cout << "withdrawal:refused" << std::endl;	
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return true;
}

int		Account::checkAmount( void ) const {return (this->_amount);}

void	Account::displayStatus( void ) const {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;

}
