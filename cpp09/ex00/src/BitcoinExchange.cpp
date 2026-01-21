/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:56:12 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/21 18:38:59 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) 
{
	std::cout << "BitcoinExchange default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& toCopy ) :
	_data(toCopy._data)
{
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange( void ) 
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange&	BitcoinExchange::operator=( const BitcoinExchange& toCopy )
{
	std::cout << "BitcoinExchange assignement operator called" << std::endl;
	if (this != &toCopy) {
		this->_data = toCopy._data;
	}
	return (*this);
}

int	BitcoinExchange::parseLine( const std::string& ) const
{
	
	return (SUCCESS);
}

BitcoinExchange::BitcoinExchange( std::ifstream& file )
{
	std::cout << "BitcoinExchange fd constructor called : parsing database..." << std::endl;

	std::string	line;

	std::getline(file, line);
	std::cout << line;
	//std::getline from std::string

	//line valid
	//	- date
	//	- value
	//date après date précedente
	
	// throw BitcoinExchange::BitcoinExchangeExcept("");
}

int	BitcoinExchange::getValue( const time_t& key ) const
{
	return (this->_data.at(key));
}

void	BitcoinExchange::setValue( time_t key, int value)
{
	this->_data.insert(std::make_pair(key, value));
}

// BitcoinExchange::BitcoinExchangeExcept::BitcoinExchangeExcept( const std::string& msg ) :
// 	errorMessage("Error : " + msg + ".") {}

// const char* BitcoinExchange::BitcoinExchangeExcept::what() const throw() {
// 	return (errorMessage.c_str());
// }
