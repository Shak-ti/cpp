/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:04 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/08 13:06:40 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& toCopy ) : _value(0) {
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy; //utilise la surcharge d'opérateur d'affectation
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& toCopy ) {
	if (this == &toCopy) {
		std::cout << "Trying to copy same instance" << std::endl;
		return (*this);
	}
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = toCopy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}
