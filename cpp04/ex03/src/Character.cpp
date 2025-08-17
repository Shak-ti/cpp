/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:53:33 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 19:50:58 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character( void ) : 
	_name("Default"),
	_inventorySize(4),
	_trashSize(100)
{
	for (size_t i = 0; i < 3; i++)
		this->_inventory[i] = NULL;
	for (size_t i = 0; i < 100; i++)
		this->_trash[i] = NULL;
	std::cout << "Character created by default" << std::endl;
}

Character::Character( const std::string& name ) :
	_name(name),
	_inventorySize(4),
	_trashSize(100)
{
	for (size_t i = 0; i < 3; i++)
		this->_inventory[i] = NULL;
	for (size_t i = 0; i < 100; i++)
		this->_trash[i] = NULL;
	std::cout << "Character created with name " << name << std::endl;
}

Character::Character( const Character& toCopy ) :
	_name(toCopy.getName()),
	_inventorySize(4),
	_trashSize(4)
{
	for (size_t i = 0; i < _inventorySize; i++)
		setToTrash(getMateria(i));
	this->emptyTrash();
	for (size_t i = 0; i < _inventorySize; i++)
		this->setMateria(toCopy.getMateria(i), i);
	std::cout << "Character created by copy" << std::endl;
}

Character::~Character( void ) {
	for (size_t i = 0; i < _inventorySize; i++)
		setToTrash(getMateria(i));
	this->emptyTrash();
	std::cout << "Character deleted" << std::endl;
}

Character& Character::operator=( const Character& toCopy) {
	std::cout << "Character assignment operator called" << std::endl;
	if ( this != &toCopy ) {
		this->_name = toCopy._name;
		for (size_t i = 0; i < _inventorySize; i++)
			this->setMateria(toCopy.getMateria(i), i);
	}
	return (*this);
}

std::string const& Character::getName() const {
	return (this->_name);
}

AMateria* Character::getMateria( unsigned int id ) const {
	if (id < _inventorySize)
		return (this->_inventory[id]);
	return (NULL);
}

void	Character::setMateria( AMateria* m, unsigned int id) {
	if (id >= _inventorySize)
		return;
	_inventory[id] = m;
}

void	Character::setToTrash( AMateria* m) {
	for (size_t i = 0; i < _trashSize; i++)
	{
		if (!_trash[i]) {
			_trash[i] = m;
			break;
		}
	}
}

void	Character::emptyTrash( void ) {
	for (size_t i = 0; i < _trashSize; i++)
		if (_trash[i])
			delete _trash[i];
}

void Character::equip(AMateria* m) {
	for (size_t i = 0; i < _inventorySize; i++)
	{
		if (getMateria(i) == NULL) {
			setMateria(m, i);
			break;
		}
	}
}

void Character::unequip(int idx) {
	setToTrash(getMateria(idx));
	setMateria(NULL, idx);
}

void Character::use(int idx, ICharacter& target) {
	AMateria* toUse;

	toUse = getMateria(idx);
	toUse->use(target);
}
