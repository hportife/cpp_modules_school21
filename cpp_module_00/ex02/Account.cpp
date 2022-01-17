#include "Account.hpp"
#include <iostream>
#include <time.h>

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

void	Account::_displayTimestamp( void )
{
    time_t		this_time = time(0);
    tm* 		now = localtime(&this_time);

    std::cout		<< "[" << now->tm_year + 1900
                     << now->tm_mon + 1
                     << now->tm_mday << "_"
                     << now->tm_hour << now->tm_min
                     << now->tm_sec << "] ";
}

//void	makeDeposit( int deposit )
//{
//    Account::_displayTimestamp();
//}