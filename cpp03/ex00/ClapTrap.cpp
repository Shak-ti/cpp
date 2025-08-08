/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:26:31 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/08 10:03:48 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Default"), _hitPoints(10), 
	_energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), 
	_energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& toCopy ) : _name(toCopy._name), 
	_hitPoints(toCopy._hitPoints), _energyPoints(toCopy._energyPoints), 
	_attackDamage(toCopy._attackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& toCopy ) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_attackDamage = toCopy._attackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string& target ) {
	if  ( this->_energyPoints == 0 ) {
		std::cout << "ClapTrap : No more Energy Points available : can't attack!" << std::endl;
		return ;
	}
	if ( this->_hitPoints == 0 ) {
		std::cout << "ClapTrap " << this->_name << " is already dead : can't attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " 
		<< this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if ( this->_hitPoints == 0 ) {
		std::cout << "ClapTrap " << this->_name << " is already dead : can't take any more damage!" << std::endl;
		return ;
	}
	if ( amount > this->_hitPoints ) {
		std::cout << "Too much damage, hit_point fall to zero, " << this->_name << " is dead!" << std::endl;
		this->_hitPoints = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is attacked, loosing " << amount << " hit points!" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if  ( this->_energyPoints == 0 ) {
		std::cout << "ClapTrap : No more Energy Points available : can't be repaired!" << std::endl;
		return ;
	}
	if ( this->_hitPoints == 0 ) {
		std::cout << "ClapTrap " << this->_name << " is already dead : can't be repaired!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repairs itself regaining " << amount << " hit points!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}
