/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:09:06 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/07 20:16:06 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("Default") {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& toCopy ) : ClapTrap(toCopy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& toCopy ) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &toCopy) {
		ClapTrap::operator=(toCopy);
	}
	return *this;
}

void ScavTrap::attack( const std::string& target ) {
	if ( this->_energyPoints == 0 ) {
		std::cout << "ScavTrap : No more Energy Points available : can't attack!" << std::endl;
		return ;
	}
	if ( this->_hitPoints == 0 ) {
		std::cout << "ScavTrap " << this->_name << " is already dead : can't attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ScavTrap::guardGate( void ) {
	if ( this->_hitPoints == 0 ) {
		std::cout << "ScavTrap " << this->_name << " is already dead : can't guard the gate!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode!" << std::endl;
}
