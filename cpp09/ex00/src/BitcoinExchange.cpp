/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:56:12 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/21 20:37:45 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& toCopy ) :
	_data(toCopy._data) {}

BitcoinExchange::~BitcoinExchange( void ) {}

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

	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
		if (parseLine(line) == FAILURE)
			throw BitcoinExchange::BitcoinExchangeException("bad line");
	}
	
	//std::getline from std::string

	//line valid
	//	- date
	//	- value
	//trim date
	//date après date précedente (comparer directement string)
}

int	BitcoinExchange::getValue( const std::string& key ) const
{
	return (this->_data.at(key));
}

void	BitcoinExchange::setValue( std::string key, int value)
{
	this->_data.insert(std::make_pair(key, value));
}

BitcoinExchange::BitcoinExchangeException::BitcoinExchangeException( const std::string& msg ) :
	errorMessage("Error : " + msg + ".") {}

const char* BitcoinExchange::BitcoinExchangeException::what() const throw() {
	return (errorMessage.c_str());
}
