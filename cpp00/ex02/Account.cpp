#include "Account.hpp"
#include <iostream>

Account::Account( int initial_deposit ) {
	_totalAmount = initial_deposit;
	return ;
}
Account::~Account( void ) {
	return ;
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
}

void	Account::makeDeposit( int deposit ){

	_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal ){

	_totalNbWithdrawals += 1;
	return (true);
}

int		Account::checkAmount( void ) const{
	return (_amount);
}

void	Account::displayStatus( void ) const{

}

int	_nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

void	_displayTimestamp( void ) {
	std::cout << "[19920104_091532]";
}

int	_accountIndex = 0;
int	_amount = 0;
int	_nbDeposits = 0;
int	_nbWithdrawals = 0;
