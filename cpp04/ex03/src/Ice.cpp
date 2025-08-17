/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:59:32 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 20:04:46 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

ice::ice( void ) : AMateria("ice") {

}

ice::ice( const ice& toCopy ) :
	AMateria(toCopy.getType())
{

}

ice::~ice( void ) {

}

ice& ice::operator=( const ice& toCopy) {

	if ( this != &toCopy ) {
		AMateria::operator=(toCopy);
	}
	return (*this);
}

void	ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

ice* ice::clone() const {
	return (new ice(*this));
}
