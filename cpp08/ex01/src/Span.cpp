/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:17:14 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/21 16:07:32 by sconiat          ###   ########.fr       */
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

Span::Span( const Span& toCopy ) :	_N(toCopy.getN()),
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
	if (getSize() >= getN()) {
		throw Span::SpanFullException();
	}
	this->_data.push_back(toAdd);
	incrementSize(1);
}

void	Span::addNumber( const std::vector<int> toAdd ) {
	if (getSize() + toAdd.size() > getN()) {
		throw Span::SpanFullException();
	}
	this->_data.insert(_data.end(), toAdd.begin(), toAdd.end());
	incrementSize(toAdd.size());
}

unsigned int	Span::shortestSpan( void ) const {
	if (this->getSize() == 0 || this->getSize() == 1) {
		throw Span::NoSpanException();
	}
	std::vector<int>	sortedCopy = this->_data;
	unsigned int		diff = this->longestSpan();
	unsigned int		newDiff;
	unsigned int		i = 0;
	
	sort(sortedCopy.begin(), sortedCopy.end());
	while ( diff > 0 &&  i < this->getSize() - 1) {
		newDiff = abs(sortedCopy[i] - sortedCopy[i + 1]);
		if ( diff > newDiff ) {
			diff = newDiff;
		}
		i++;
	}
	return (diff);
}

unsigned int	Span::longestSpan( void ) const {
	if (this->getSize() == 0 || this->getSize() == 1) {
		throw Span::NoSpanException();
	}
	int	max = *std::max_element(this->_data.begin(), this->_data.end());
	int	min = *std::min_element(this->_data.begin(), this->_data.end());
	return (max - min);
}

unsigned int	Span::getN( void ) const {
	return (this->_N);
}

void	Span::setN( unsigned int N ) {
	this->_N = N;
}

unsigned int	Span::getSize( void ) const {
	return (this->_size);
}

void	Span::incrementSize( unsigned int value ) {
	this->_size = this->_size + value;
}

int	Span::getData( unsigned int index ) const {
	return (this->_data[index]);
}

void	Span::setData( int value, unsigned int index ) {
	this->_data[index] = value;
}

std::ostream&	operator<<( std::ostream& os, const Span& toPrint )
{
	os << "Span : {";
	if ( toPrint.getN() ) {
		for (size_t i = 0; i < toPrint.getN(); i++) {
			if ( i < toPrint.getSize() ) {
				os << toPrint.getData(i);
			} else {
				os << "x";
			}
			if ( i + 1 < toPrint.getN() ) {
				os << ", ";
			}
		}
	}	
	os << "}" << std::endl;
	return (os);
}

const char* Span::NoSpanException::what() const throw() {
	return ("No Span can be found");
}

const char* Span::SpanFullException::what() const throw() {
	return ("Span is full / too much numbers to add, can't add numbers");
}
