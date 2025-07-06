/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:04 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/05 15:15:23 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& toCopy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::Fixed( const int nb ) {
	this->_value = nb * (1 << 8);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nb ) {
	this->_value = static_cast<int>(roundf(nb * (1 << 8)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& rhs ) {
	if (this == &rhs) {
		std::cout << "Trying to copy same instance" << std::endl;
		return *this;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int Fixed::operator>( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "Comparing same instance" << std::endl;
	}
	if (this->_value > rhs.getRawBits()) {
		return (0);
	}
	return (1);
}

int Fixed::operator<( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "Comparing same instance" << std::endl;
	}
	if (this->_value < rhs.getRawBits()) {
		return (0);
	}
	return (1);
}

int Fixed::operator>=( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "Comparing same instance" << std::endl;
	}
	if (this->_value >= rhs.getRawBits()) {
		return (0);
	}
	return (1);
}

int Fixed::operator<=( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "Comparing same instance" << std::endl;
	}
	if (this->_value <= rhs.getRawBits()) {
		return (0);
	}
	return (1);
}

int Fixed::operator==( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "Comparing same instance" << std::endl;
	}
	if (this->_value == rhs.getRawBits()) {
		return (0);
	}
	return (1);
}

int Fixed::operator!=( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "Comparing same instance" << std::endl;
	}
	if (this->_value != rhs.getRawBits()) {
		return (0);
	}
	return (1);
}

Fixed Fixed::operator+( const Fixed& rhs) const {
	return (Fixed(this->_value + rhs.getRawBits()));
}

Fixed Fixed::operator-( const Fixed& rhs) const {
	return (Fixed(this->_value - rhs.getRawBits()));
}

Fixed Fixed::operator*( const Fixed& rhs) const {
	return (Fixed(this->_value * rhs.getRawBits()));
}

Fixed Fixed::operator/( const Fixed& rhs) {
	return (Fixed(this->_value / rhs.getRawBits()));
}

// Fixed Fixed::operator++( int diff ) const {
// 	Fixed	res;
	
// 	return (res);
// }

// Fixed Fixed::operator--( int diff ) const {
// 	Fixed	res;
	
// 	return (res);
// }

// Fixed Fixed::operator++( void ) const {
// 	Fixed	res;
	
// 	return (res);
// }

// Fixed Fixed::operator--( void ) const {
// 	Fixed	res;
	
// 	return (res);
// }

// static Fixed&	max( Fixed& lhs, Fixed& rhs) {
// 	if (&lhs == &rhs) {
// 		std::cout << "Comparing same instances" << std::endl;
// 		return (lhs);
// 	}
// 	if (lhs > rhs) {
// 		return (lhs);
// 	}
// 	return (rhs);
// }

// static Fixed&	max( const Fixed& lhs, const Fixed& rhs) {
// 	Fixed	res = lhs;
	
// 	return (res);
// }

// static Fixed&	min( Fixed& lhs, Fixed& rhs) {
// 	if (&lhs == &rhs) {
// 		std::cout << "Comparing same instances" << std::endl;
// 		return (lhs);
// 	}
// 	if (lhs < rhs) {
// 		return (lhs);
// 	}
// 	return (rhs);
// }

// static Fixed&	min( const Fixed& lhs, const Fixed& rhs) {
// 	Fixed	res = lhs;
	
// 	return (res);
// }


int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

int	Fixed::toInt( void ) const {
	return (this->_value / (1 << 8));
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(this->_value) / (1 << 8));
}

std::ostream& operator<<( std::ostream& os, const Fixed& nbr ) {
	os << nbr.toFloat();
	return (os);
}
