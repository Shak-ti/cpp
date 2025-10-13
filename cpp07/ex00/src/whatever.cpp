/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:23:51 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 18:24:19 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

Whatever::Whatever( void ) {}

Whatever::Whatever( int number, std::string name ) :
	_number(number),
	_name(name) {}

Whatever::~Whatever() {}

Whatever&	Whatever::operator=( Whatever const & rhs) {
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setNumber(rhs.getNumber());
	}
	return (*this);
}

bool	Whatever::operator<( Whatever const & rhs)const {
	return (rhs.getNumber() < this->getNumber());
}

bool	Whatever::operator>( Whatever const & rhs)const {
	return (rhs.getNumber() > this->getNumber());
}

int			Whatever::getNumber( void )const {
	return (_number);
}

std::string	Whatever::getName( void )const {
	return (_name);
}

void		Whatever::setNumber( int number ) {
	_number = number;
}

void		Whatever::setName( std::string name ) {
	_name = name;
}

std::ostream&	operator<<( std::ostream& os, const Whatever& toPrint ) {
	os << "{" << toPrint.getName() << ", " << toPrint.getNumber() << "}";
	return (os);
}

