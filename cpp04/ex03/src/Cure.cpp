/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:59:39 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 19:31:51 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

cure::cure( void ) : AMateria("cure") {

}

cure::cure( const cure& toCopy ) :
	AMateria(toCopy.getType())
{

}

cure::~cure( void ) {

}

cure& cure::operator=( const cure& toCopy) {

	if ( this != &toCopy ) {
		AMateria::operator=(toCopy);
	}
	return (*this);
}

void	cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

cure* cure::clone() const {
	return (new cure(*this));
}
