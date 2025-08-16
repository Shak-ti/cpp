/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:00:01 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 21:31:23 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "MateriaSource created by default" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& toCopy ) {
	std::cout << "MateriaSource created by copy" << std::endl;
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& toCopy) {
	std::cout << "MateriaSource assignment operator called" << std::endl;
	if ( this != &toCopy ) {

	}
	return (*this);
}

void MateriaSource::learnMateria( AMateria* ) {
	
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	
}
