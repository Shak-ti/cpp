/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:59:39 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 21:30:04 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

cure::cure( void ) : AMateria("Default") {
	std::cout << "cure created by default" << std::endl;
}

cure::cure( const cure& toCopy ) :
	AMateria(toCopy.getType())
{
	std::cout << "cure created by copy" << std::endl;
}

cure::~cure( void ) {
	std::cout << "cure destroyed" << std::endl;
}

cure& cure::operator=( const cure& toCopy) {
	std::cout << "cure assignment operator called" << std::endl;
	if ( this != &toCopy ) {
		AMateria::operator=(toCopy);
	}
	return (*this);
}

void	cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* AMateria::clone() const {
	
}
