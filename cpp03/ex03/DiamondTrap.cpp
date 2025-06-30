/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:21:02 by marvin            #+#    #+#             */
/*   Updated: 2025/06/30 17:21:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(_name + "_clap_name") {
	this->_name = name;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy) : ClapTrap(_name + "_clap_name")  {
	this->_name = toCopy._name;
	this->_hitPoints = toCopy.getHitPoints();
	this->_energyPoints = toCopy.getEnergyPoints();
	this->_attackDamage = toCopy.getAttackDamage();
	std::cout << "DiamondTrap " << this->_name << " copied." << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << this->_name << " destroyed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& toCopy) {
	if (this != &toCopy) {
		this->_name = toCopy._name;
		this->_hitPoints = toCopy._hitPoints;
		this->_energyPoints = toCopy._energyPoints;
		this->_attackDamage = toCopy._attackDamage;
	}
	std::cout << "DiamondTrap " << this->_name << " assigned." << std::endl;
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

std::string	DiamondTrap::getName( void ) {
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