/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:12:27 by katherine     #+#    #+#                 */
/*   Updated: 2021/11/13 12:07:15 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::time_t time = std::time(nullptr);
    std::cout << "[" << time << "] ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";"
	<< "total:" << Account::_totalAmount << ";"
	<< "deposits:" << Account::_totalNbDeposits << ";"
	<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";"
	<< "p_amount:" << _amount << ";"
	<< "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";"
	<< "nb_deposits:" << _nbDeposits << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << initial_deposit << ";"
	<< "created" << std::endl;

}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "closed" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "p_amount:" << _amount << ";";
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";"
	<< "amount:" << _amount << ";"
	<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals << std::endl;
}