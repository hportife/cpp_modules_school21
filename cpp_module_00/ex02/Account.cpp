#include "Account.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

int Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	Account::_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created\n";
}

Account::Account(void) {}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed\n";
}

void	Account::_displayTimestamp( void )
{
    time_t		this_time = time(0);
    tm* 		now = localtime(&this_time);
	std::cout		<< "[" << (now->tm_year + 1900)
					 << 0 << (now->tm_mon + 1)
					 << now->tm_mday << "_"
					 << now->tm_hour << now->tm_min
			<< now->tm_sec << "] ";

}


