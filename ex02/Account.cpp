/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:47:59 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/09/11 19:43:32 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account( int initial_deposit){
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
}

Account::Account( void ){
	_accountIndex = _nbAccounts;
	_nbAccounts++;
}

void Account::makeDeposit( int diposit ){
	_amount += diposit;
	_totalAmount += diposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
}

bool Account::makeWithdrawal( int withdrawel ){
	if (_amount < withdrawel)
		return (false);
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	_amount -= withdrawel;
	_totalAmount -= withdrawel;
	return (true);
}

int Account::checkAmount( void ) const {
	return (_amount);
}

void Account::displayStatus(void) const {
	std::cout << "index:" << _accountIndex << ";" << "amount:" << 
}

void Account::displayAccountsInfos( void ){

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

int Account::getTotalAmount( void ){
	return (_totalAmount);
}

