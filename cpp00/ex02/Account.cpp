#include "Account.hpp"
#include <iostream>
#include <ctime>

# define BLUE 		"\033[1;36m"
# define RESET 		"\033[0m"

Account::Account( int initial_deposit ) {
	_displayTimestamp();
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";amount:" << BLUE << initial_deposit << RESET;
	std::cout << ";created\n";
	Account::_nbAccounts += 1;
	return ;
}
Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";amount:" << BLUE << this->_amount << RESET;
	std::cout << ";closed\n";
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

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << BLUE << getNbAccounts() << RESET;
	std::cout << ";total:" << BLUE << getTotalAmount() << RESET;
	std::cout << ";deposits:" << BLUE << _totalNbDeposits << RESET;
	std::cout << ";withdrawals:" << BLUE << _totalNbWithdrawals << std::endl << RESET;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";p_amount:" << BLUE << this->checkAmount() << RESET;
	std::cout << ";deposit:" << BLUE << deposit << RESET;
	this->_amount += deposit;
	_totalNbDeposits += 1;
	this->_nbDeposits +=1;
	_totalAmount += deposit;
	std::cout << ";amount:" << BLUE << this->checkAmount() << RESET;
	std::cout << ";nb_deposits:" << BLUE << this->_nbDeposits << std::endl << RESET;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	if (withdrawal > this->_amount) {
		std::cout << "index:" << BLUE << this->_accountIndex << RESET;
		std::cout << ";p_amount:" << BLUE << this->checkAmount() << RESET;
		std::cout << ";withdrawal:refused" << BLUE << std::endl << RESET;
		return (false);
	}
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";p_amount:" << BLUE << this->checkAmount() << RESET;
	std::cout << ";withdrawal:" << BLUE << withdrawal << RESET;
	this->_amount -= withdrawal;
	_totalNbWithdrawals += 1;
	this->_nbWithdrawals +=1;
	_totalAmount -= withdrawal;
	std::cout << ";amount:" << BLUE << this->checkAmount() << RESET;
	std::cout << ";nb_withdrawals:" << BLUE << this->_nbWithdrawals << std::endl << RESET;
	return (true);
}

int		Account::checkAmount( void ) const{
	return (_amount);
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET;
	std::cout << ";amount:" << BLUE << _amount << RESET;
	std::cout << ";deposits:" << BLUE << _nbDeposits << RESET;
	std::cout << ";withdrawals:" << BLUE << _nbWithdrawals << std::endl << RESET;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
	std::time_t now = std::time(NULL);
    std::tm localTime;
    char buffer[20];
    
    localtime_r(&now, &localTime);
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", &localTime);
	std::cout << buffer;
}
