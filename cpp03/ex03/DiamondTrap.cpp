/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:21:02 by marvin            #+#    #+#             */
/*   Updated: 2025/07/01 12:20:49 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(_name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy) : ClapTrap(toCopy._name + "_clap_name"), ScavTrap(toCopy._name + "_clap_name"), FragTrap(toCopy._name + "_clap_name") {
	this->_hitPoints = toCopy.getHitPoints();
	this->_energyPoints = toCopy.getEnergyPoints();
	this->_attackDamage = toCopy.getAttackDamage();
	std::cout << "DiamondTrap " << this->_name << " copied." << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called.\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& toCopy) {
	std::cout << "DiamondTrap copy assignment operator called\n";
	if (this != &toCopy) {
		this->_name = toCopy._name;
		this->_hitPoints = toCopy._hitPoints;
		this->_energyPoints = toCopy._energyPoints;
		this->_attackDamage = toCopy._attackDamage;
	}
	return *this;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	ClapTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
	FragTrap::beRepaired(amount);
}

void DiamondTrap::guardGate(void) {
	ScavTrap::guardGate();
}

void DiamondTrap::highFivesGuys(void) {
	FragTrap::highFivesGuys();
}

void DiamondTrap::whoAmI(void) {
	std::cout << "I am " << this->_name << ", my ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
}

std::string	DiamondTrap::getName( void ) const {
	return _name;
}

unsigned int	DiamondTrap::getHitPoints( void ) const {
	return _hitPoints;
}

unsigned int	DiamondTrap::getEnergyPoints( void ) const {
	return _energyPoints;
}

unsigned int	DiamondTrap::getAttackDamage( void ) const {
	return _attackDamage;
}
