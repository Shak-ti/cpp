/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:15:57 by marvin            #+#    #+#             */
/*   Updated: 2025/07/01 12:16:06 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap( const FragTrap& toCopy ) : ClapTrap(toCopy) {
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}

FragTrap& FragTrap::operator=( const FragTrap& toCopy ) {
	std::cout << "FragTrap copy assignment operator called\n";
	if (this != &toCopy) {
		ClapTrap::operator=(toCopy);
	}
	return *this;
}

void FragTrap::attack( const std::string& target ) {
	if ( _energyPoints == 0 ) {
		std::cout << "FragTrap : No more Energy Points available : can't attack!\n";
		return ;
	}
	if ( _hitPoints == 0 ) {
		std::cout << "FragTrap " << _name << " is already dead : can't attack!\n";
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!\n";
	_energyPoints--;
}

void FragTrap::takeDamage( unsigned int amount ) {
	if ( _hitPoints == 0 ) {
		std::cout << "FragTrap " << _name << " is already dead : can't take any more damage!\n";
		return ;
	}
	std::cout << "FragTrap " << _name << " is attacked, loosing " << amount << " hit points!\n";
	_hitPoints -= amount;
}

void FragTrap::beRepaired( unsigned int amount ) {
	if ( _energyPoints == 0 ) {
		std::cout << "FragTrap : No more Energy Points available : can't be repaired!\n";
		return ;
	}
	if ( _hitPoints == 0 ) {
		std::cout << "FragTrap " << _name << " is already dead : can't be repaired!\n";
		return ;
	}
	while ( _hitPoints + amount > 100 ) {
		amount--;
	}
	std::cout << "FragTrap " << _name << " is repaired, gaining " << amount << " hit points!\n";
	_hitPoints += amount;
	_energyPoints--;
}

void FragTrap::highFivesGuys( void ) {
	if ( _hitPoints == 0 ) {
		std::cout << "FragTrap " << _name << " is already dead : high five!\n";
		return ;
	}
	std::cout << "FragTrap " << _name << " is high fiving you!\n";
}

std::string	FragTrap::getName( void ) const {
	return _name;
}

unsigned int	FragTrap::getHitPoints( void ) const {
	return _hitPoints;
}

unsigned int	FragTrap::getEnergyPoints( void ) const {
	return _energyPoints;
}

unsigned int	FragTrap::getAttackDamage( void ) const {
	return _attackDamage;
}
