/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:51:12 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/11 15:38:49 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(){
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
		_nbAccounts--;
		_totalAmount -= _amount;
}

int Account::getNbAccounts(){
	return _nbAccounts;
}

int Account::getTotalAmount(){
	return _totalAmount;
}

int	Account::getNbDeposits(){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(){
	std::cout << "accounts:" << _nbAccounts <<";total:" << _totalAmount << ";deposits:"
				<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;

}

void Account::makeDeposit(int deposit){
	_amount += deposit;
	std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount - deposit)
				<< ";deposit:" << deposit << ";amount:" << _amount
				<< ";nb_deposit:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	_amount -= withdrawal;
	if (_amount - withdrawal > 0){
		std::cout << "index" << _accountIndex << ";p_amount:" << (_amount + withdrawal)
					<< ";withdrawals:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals" << _nbWithdrawals << std::endl;
		return (true);
	}
	else{
		std::cout << "index" << _accountIndex << ";p_amount:" << _amount
					<< ";withdrawals:refused" << std::endl;
		return (false);
	}
	//si amount - withdrawals > 0 == true -> amout -= withdrawals et nb_withdrawals++
	//sinon refuser
}

int Account::checkAmount()const{
	return (_amount);
}


void Account::displayStatus()const{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

//oue je te l'ai volé JB (j'ai rien compris faut que je refasse la ft)
void Account::_displayTimestamp(void) {
    std::time_t t = std::time(NULL);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << now->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << now->tm_hour
              << std::setw(2) << std::setfill('0') << now->tm_min
              << std::setw(2) << std::setfill('0') << now->tm_sec << "]";
}
