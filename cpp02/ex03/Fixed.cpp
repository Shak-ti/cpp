/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:04 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/07 09:46:53 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	if (F_TOGGLE) {
		std::cout << "FIXED: " << "Default constructor called" << std::endl;
	} 
}

Fixed::Fixed( const Fixed& toCopy ) {
	if (F_TOGGLE) {
		std::cout << "FIXED: " << "Copy constructor called" << std::endl;
	}
	*this = toCopy;
}

Fixed::Fixed( const int nb ) {
	this->_value = nb * (1 << _frac);
	if (F_TOGGLE) {
		std::cout << "FIXED: " << "Int constructor called" << std::endl;
	}
}

Fixed::Fixed( const float nb ) {
	this->_value = static_cast<int>(roundf(nb * (1 << _frac)));
	if (F_TOGGLE) {
		std::cout << "FIXED: " << "Float constructor called" << std::endl;
	}
}

Fixed::~Fixed() {
	if (F_TOGGLE) {
		std::cout << "FIXED: " << "Destructor called" << std::endl;
	}
}

Fixed& Fixed::operator=( const Fixed& rhs ) {
	if (this == &rhs) {
		std::cout << "FIXED: " << "Trying to copy same instance" << std::endl;
		return *this;
	}
	if(F_TOGGLE) {
		std::cout << "FIXED: " << "Copy assignment operator called" << std::endl;
	}
	this->_value = rhs.getRawBits();
	return (*this);
}

int Fixed::operator>( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "FIXED: " << "Comparing same instance" << std::endl;
	}
	return (this->_value > rhs.getRawBits());
}

int Fixed::operator<( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "FIXED: " << "Comparing same instance" << std::endl;
	}
	return (this->_value < rhs.getRawBits());
}

int Fixed::operator>=( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "FIXED: " << "Comparing same instance" << std::endl;
	}
	return (this->_value >= rhs.getRawBits());
}

int Fixed::operator<=( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "FIXED: " << "Comparing same instance" << std::endl;
	}
	return (this->_value <= rhs.getRawBits());
}

int Fixed::operator==( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "FIXED: " << "Comparing same instance" << std::endl;
	}
	return (this->_value == rhs.getRawBits());
}

int Fixed::operator!=( const Fixed& rhs ) const {
	if (this == &rhs) {
		std::cout << "FIXED: " << "Comparing same instance" << std::endl;
	}
	return (this->_value != rhs.getRawBits());
}

Fixed Fixed::operator+( const Fixed& rhs) const {
	return (Fixed((this->toFloat() + rhs.toFloat())));
}

Fixed Fixed::operator-( const Fixed& rhs) const {
	return (Fixed((this->toFloat() - rhs.toFloat())));
}

Fixed Fixed::operator*( const Fixed& rhs) const {
	return (Fixed((this->toFloat() * rhs.toFloat())));
}

Fixed Fixed::operator/( const Fixed& rhs) {
	return (Fixed((this->toFloat() / rhs.toFloat())));
}

Fixed Fixed::operator++( void ) { //suffixe
	++(this->_value);
	return (*this);
}

Fixed Fixed::operator--( void ) {
	--(this->_value);
	return (*this);
}

Fixed Fixed::operator++( int diff ) { //préfixe
	(void) diff;
	Fixed	copy = *this;
	
	++(this->_value);
	return (copy);
}

Fixed Fixed::operator--( int diff ) {
	(void) diff;
	Fixed	copy = *this;
	
	--(this->_value);
	return (copy);
}

Fixed	Fixed::max( Fixed& lhs, Fixed& rhs) {
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed const	Fixed::max( const Fixed& lhs, const Fixed& rhs) {
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed	Fixed::min( Fixed& lhs, Fixed& rhs) {
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed const	Fixed::min( const Fixed& lhs, const Fixed& rhs) {
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	return (rhs);
}


int	Fixed::getRawBits( void ) const {
	if (F_TOGGLE) {
		std::cout << "FIXED: " << "getRawBits member function called" << std::endl;
	}
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

int	Fixed::toInt( void ) const {
	return (this->_value / (1 << _frac));
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(this->_value) / (1 << _frac));
}

std::ostream& operator<<( std::ostream& os, const Fixed& nbr ) {
	os << nbr.toFloat();
	return (os);
}
