/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:04 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 15:53:19 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int nb ) {
	_value = nb << 8;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float nb ) {
	std::cout << "Float constructor called\n";
}

Fixed::Fixed( const Fixed& toCopy ) : _value(toCopy._value) {
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=( const Fixed& toCopy ) {
	std::cout << "Copy assignment operator called\n";
	_value = toCopy.getRawBits();
	return *this;
}

ostream& Fixed::operator<<( ostream& os, const Fixed& toCopy ) {
	std::cout << "Insert operator called\n";
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return _value;
}

void	Fixed::setRawBits( int const raw ) {
	_value = raw;
}

float	Fixed::toFloat( void ) const {
	float	res;
	
	return (res);
}

int	Fixed::toInt( void ) const {
	int	res;
	
	return (res);
}

const int	Fixed::_frac = 8;
