/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:26:31 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/01 12:15:52 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap( const ClapTrap& toCopy ) : _name(toCopy._name), _hitPoints(toCopy._hitPoints), _energyPoints(toCopy._energyPoints), _attackDamage(toCopy._attackDamage) {
	std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap& ClapTrap::operator=( const ClapTrap& toCopy ) {
	std::cout << "ClapTrap copy assignment operator called\n";
	_name = toCopy._name;
	_hitPoints = toCopy._hitPoints;
	_energyPoints = toCopy._energyPoints;
	_attackDamage = toCopy._attackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string& target ) {
	if  ( _energyPoints == 0 ) {
		std::cout << "ClapTrap : No more Energy Points available : can't attack!\n";
		return ;
	}
	if ( _hitPoints == 0 ) {
		std::cout << "ClapTrap " << _name << " is already dead : can't attack!\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!\n";
	_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if ( _hitPoints == 0 ) {
		std::cout << "ClapTrap " << _name << " is already dead : can't take any more damage!\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " is attacked, loosing " << amount << " hit points!\n";
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if  ( _energyPoints == 0 ) {
		std::cout << "ClapTrap : No more Energy Points available : can't be repaired!\n";
		return ;
	}
	if ( _hitPoints == 0 ) {
		std::cout << "ClapTrap " << _name << " is already dead : can't be repaired!\n";
		return ;
	}
	while ( _hitPoints + amount > 10 ) {
		amount--;
	}
	std::cout << "ClapTrap " << _name << " repairs itself regaining " << amount << " hit points!\n";
	_hitPoints += amount;
	_energyPoints--;
}

std::string	ClapTrap::getName( void ) const {
	return _name;
}

unsigned int	ClapTrap::getHitPoints( void ) const {
	return _hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {
	return _energyPoints;
}

unsigned int	ClapTrap::getAttackDamage( void ) const {
	return _attackDamage;
}
