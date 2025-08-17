/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:00:01 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 20:09:54 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) :
	_stackSize(4)
{
	
}

MateriaSource::MateriaSource( const MateriaSource& toCopy ) :
	_stackSize(4)
{
	for (size_t i = 0; i < _stackSize; i++)
		this->setMateria(toCopy.getMateria(i), i);
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& toCopy) {
	if ( this != &toCopy ) {
		for (size_t i = 0; i < _stackSize; i++)
			this->setMateria(toCopy.getMateria(i), i);
	}
	return (*this);
}

void MateriaSource::learnMateria( AMateria* m ) {
	for (size_t i = 0; i < _stackSize; i++)
	{
		if (getMateria(i) == NULL)
		{
			setMateria(m, i);
			break;
		}
	}
}

AMateria* MateriaSource::getMateria( unsigned int id ) const {
	if (id < _stackSize)
		return (this->_stack[id]);
	return (NULL);
}

void	MateriaSource::setMateria( AMateria* m, unsigned int id) {
	if (id >= _stackSize)
		return;
	_stack[id] = m;
}

AMateria* MateriaSource::createMateria( std::string const& type ) {
	AMateria*	res = NULL;
	size_t		i = 0;
	
	if (type != "cure" && type != "ice")
		return (NULL);
	while (res->getType() != type && i < _stackSize)
	{
		res = getMateria(i);
		i++;
	}
	return (res);
}
