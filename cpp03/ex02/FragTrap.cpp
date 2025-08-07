/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:15:57 by marvin            #+#    #+#             */
/*   Updated: 2025/08/07 20:15:23 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("Default") {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& toCopy ) : ClapTrap(toCopy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& toCopy ) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &toCopy) {
		ClapTrap::operator=(toCopy);
	}
	return *this;
}

void FragTrap::attack( const std::string& target ) {
	if ( this->_energyPoints == 0 ) {
		std::cout << "FragTrap : No more Energy Points available : can't attack!" << std::endl;
		return ;
	}
	if ( this->_hitPoints == 0 ) {
		std::cout << "FragTrap " << this->_name << " is already dead : can't attack!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void FragTrap::highFivesGuys( void ) const {
	if ( this->_hitPoints == 0 ) {
		std::cout << "FragTrap " << this->_name << " is already dead : high five!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " is high fiving you!" << std::endl;
}
