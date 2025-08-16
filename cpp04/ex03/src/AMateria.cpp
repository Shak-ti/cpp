/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:11:25 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 20:43:58 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria( void ) : _type("Default") {
	std::cout << "AMateria created by default" << std::endl;
}

AMateria::AMateria( AMateria& toCopy ) : _type(toCopy.getType()) {
	std::cout << "AMateria created by copy" << std::endl;
}

AMateria::AMateria( std::string const& type ) : _type(type) {
	std::cout << "AMateria created with type " << type << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria destroyed" << std::endl;
}

AMateria& AMateria::operator=( const AMateria& toCopy) {
	std::cout << "AMateria assignment operator called" << std::endl;
	if ( this != &toCopy ) {
		this->_type = toCopy._type;
	}
	return (*this);
}

std::string const&	AMateria::getType() const {
	return (this->_type);
}


