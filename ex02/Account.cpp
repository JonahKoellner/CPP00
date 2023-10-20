/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:47:59 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/20 12:27:59 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit){
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	// _totalNbDeposits += 1;
	// _nbDeposits += 1;
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account( void ){
	// std::cout <<
	_accountIndex = _nbAccounts;
	_nbAccounts++;
}

Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit( int diposit ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposits:" << diposit;
	_amount += diposit;
	_totalAmount += diposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawel ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if (_amount < withdrawel)
		return (std::cout << ";withdrawal:refused" << std::endl , false);
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	_amount -= withdrawel;
	_totalAmount -= withdrawel;
	std::cout << ";withdrawal:" << withdrawel << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount( void ) const {
	return (_amount);
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

int Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int Account::getTotalAmount( void ){
	return (_totalAmount);
}

int Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void ){
	std::string time = std::to_string(std::chrono::system_clock::now().time_since_epoch().count());
	std::cout << "[" << time.substr(0, 8) << "_" << time.substr(8, 6) << "] ";
}
