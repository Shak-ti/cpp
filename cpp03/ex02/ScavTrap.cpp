/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:09:06 by sconiat           #+#    #+#             */
/*   Updated: 2025/06/28 14:00:25 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap( const ScavTrap& toCopy ) : ClapTrap(toCopy) {
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap& ScavTrap::operator=( const ScavTrap& toCopy ) {
	std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &toCopy) {
		ClapTrap::operator=(toCopy);
	}
	return *this;
}

void ScavTrap::attack( const std::string& target ) {
	if ( _energyPoints == 0 ) {
		std::cout << "ScavTrap : No more Energy Points available : can't attack!\n";
		return ;
	}
	if ( _hitPoints == 0 ) {
		std::cout << "ScavTrap " << _name << " is already dead : can't attack!\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!\n";
	_energyPoints--;
}

void ScavTrap::takeDamage( unsigned int amount ) {
	if ( _hitPoints == 0 ) {
		std::cout << "ScavTrap " << _name << " is already dead : can't take any more damage!\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " is attacked, loosing " << amount << " hit points!\n";
	_hitPoints -= amount;
}

void ScavTrap::beRepaired( unsigned int amount ) {
	if ( _energyPoints == 0 ) {
		std::cout << "ScavTrap : No more Energy Points available : can't be repaired!\n";
		return ;
	}
	if ( _hitPoints == 0 ) {
		std::cout << "ScavTrap " << _name << " is already dead : can't be repaired!\n";
		return ;
	}
	while ( _hitPoints + amount > 100 ) {
		amount--;
	}
	std::cout << "ScavTrap " << _name << " is repaired, gaining " << amount << " hit points!\n";
	_hitPoints += amount;
	_energyPoints--;
}

void ScavTrap::guardGate( void ) {
	if ( _hitPoints == 0 ) {
		std::cout << "ScavTrap " << _name << " is already dead : can't guard the gate!\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!\n";
}