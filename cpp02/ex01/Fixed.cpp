/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:04 by sconiat           #+#    #+#             */
/*   Updated: 2025/06/26 14:32:43 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int nb ) {
	_value = nb << 8;
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float nb ) {
	float	right;
	int		left;
	
	left = roundf(nb);
	right = (nb - left);
	std::cout << "left : " << left << " and right :" << right << std::endl;
	_value = (left << 8) + right;
	std::cout << "value is " << _value << std::endl;
	// std::cout << "Float constructor called\n";
}

Fixed::Fixed( const Fixed& toCopy ) : _value(toCopy._value) {
	// std::cout << "Copy constructor called\n";
}

Fixed::~Fixed() {
	// std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=( const Fixed& toCopy ) {
	// std::cout << "Copy assignment operator called\n";
	_value = toCopy.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	return _value;
}

void	Fixed::setRawBits( int const raw ) {
	_value = raw;
}

float	Fixed::toFloat( void ) const {
	float	res = 0.0;
	
	return (res);
}

int	Fixed::toInt( void ) const {
	int	res = 0;
	
	return (res);
}

const int	Fixed::_frac = 8;

std::ostream& operator<<( std::ostream& os, const Fixed& nbr ) {
	int	left;
	int	right;
	
	left = nbr.getRawBits() >> 8;
	right = nbr.getRawBits();
	std::cout << "left : " << left << " and right :" << right << std::endl;
	if (right == 0)
		os << left;
	else
		os << left << "." << right;
	return os;
}
