/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:21:02 by marvin            #+#    #+#             */
/*   Updated: 2025/08/08 10:16:28 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), _name("Default") {
	this->_hitPoints = FragTrap::defaultHitPoint;
	this->_energyPoints = ScavTrap::defaultEnergyPoint;
	this->_attackDamage = FragTrap::defaultAttackDamage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name) {
	this->_hitPoints = FragTrap::defaultHitPoint;
	this->_energyPoints = ScavTrap::defaultEnergyPoint;
	this->_attackDamage = FragTrap::defaultAttackDamage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy)	: ClapTrap(toCopy), 
	FragTrap(toCopy), ScavTrap(toCopy), _name(toCopy._name) {
	std::cout << "DiamondTrap " << this->_name << " copied." << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& toCopy) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &toCopy) {
		ClapTrap::operator=(toCopy);
        this->_name = toCopy._name;
	}
	return *this;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "I am " << this->_name << ", my ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
}
