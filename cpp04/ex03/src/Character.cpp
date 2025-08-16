/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:53:33 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 21:22:22 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character( void ) : 
	_name("Default")
{
	for (size_t i = 0; i < 3; ++i)
		this->_inventory[i] = NULL;
	std::cout << "Character created by default" << std::endl;
}

Character::Character( const std::string& name ) :
	_name(name)
{
	for (size_t i = 0; i < 3; ++i)
		this->_inventory[i] = NULL;
	std::cout << "Character created with name " << name << std::endl;
}

Character::Character( const Character& toCopy ) :
	_name(toCopy.getName())
{
	std::cout << "Character created by copy" << std::endl;
}

Character& Character::operator=( const Character& toCopy) {
	std::cout << "Character assignment operator called" << std::endl;
	if ( this != &toCopy ) {
		this->_name = toCopy._name;
		
	}
	return (*this);
}

std::string const& Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	
}

void Character::unequip(int idx) {
	
}

void Character::use(int idx, Character& target) {
	
}
