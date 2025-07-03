/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:04 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/03 13:37:57 by sconiat          ###   ########.fr       */
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

Fixed& Fixed::operator=( const Fixed& toCopy ) {
	if (this == &toCopy) {
		std::cout << "Trying to copy same instance" << std::endl;
		return *this;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = toCopy.getRawBits();
	return (*this);
}

Fixed& Fixed::operator>( const Fixed& ) {
	
}

Fixed& Fixed::operator<( const Fixed& ) {
	
}

Fixed& Fixed::operator>=( const Fixed& ) {
	
}

Fixed& Fixed::operator<=( const Fixed& ) {
	
}

Fixed& Fixed::operator==( const Fixed& ) {
	
}

Fixed& Fixed::operator!=( const Fixed& ) {

}

Fixed& Fixed::operator+( const Fixed& ) {

}

Fixed& Fixed::operator-( const Fixed& ) {

}

Fixed& Fixed::operator*( const Fixed& ) {
	
}

Fixed& Fixed::operator/( const Fixed& ) {

}

Fixed& Fixed::operator++( int ) {

}

Fixed& Fixed::operator--( int ) {

}

Fixed& Fixed::operator++( void ) {

}

Fixed& Fixed::operator--( void ) {
	
}

static Fixed&	max( Fixed&, Fixed& ) {
	
}

static Fixed&	max( const Fixed&, const Fixed& ) {
	
}

static Fixed&	min( Fixed&, Fixed& ) {

}

static Fixed&	min( const Fixed&, const Fixed& ) {

}


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
