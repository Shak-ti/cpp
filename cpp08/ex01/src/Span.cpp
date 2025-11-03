/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:17:14 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/03 16:36:16 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span( void ) :	_N(0),
						_size(0) {
	std::cout << "Default constructor called, N = 0" << std::endl;
	this->_it = this->_data.begin();
}

Span::Span( unsigned int& N ) :	_N(N),
								_size(0) {
	std::cout << "Span of size " << N << " constructed" << std::endl;
	this->_it = this->_data.begin();
}

Span::Span( Span& toCopy ) :	_N(toCopy.getN()),
								_size(toCopy.getSize()) {
	std::cout << "Copy constructor called" << std::endl;
	_data = toCopy._data;

}

Span::~Span( void ) {
	std::cout << "Destructor called" << std::endl;
}

Span&	Span::operator=( Span& toCopy ) {
	std::cout << "Assignement operator called" << std::endl;
	if (this != &toCopy) {
		this->_data = toCopy._data;
		setN(toCopy.getN());
	}
	return (*this);
}

void	Span::addNumber( const int& toAdd ) {
	if (getSize() > getN()) {
		throw Span::NoSpanException();
	}
	this->_data.push_back(toAdd);
	incrementSize();
}

void	Span::addNumbers( const std::vector<int> toAdd ) {
	if (getSize() + toAdd.size() > getN()) {
		throw Span::NoSpanException();
	}
	this->_data.insert();
	for (size_t i = 0; i < toAdd.size(); i++) {
		incrementSize();
	}
}

unsigned int	Span::shortestSpan( void ) const {
	
}

unsigned int	Span::longestSpan( void ) const {
	
}

unsigned int	Span::getN( void ) {
	return (this->_N);
}

void	Span::setN( unsigned int N ) {
	this->_N = N;
}

unsigned int	Span::getSize( void ) {
	return (this->_size);
}

void	Span::incrementSize( void ) {
	this->_size = this->_size + 1;
}

const char* Span::NoSpanException::what() const throw() {
	return ("No Span can be found");
}
