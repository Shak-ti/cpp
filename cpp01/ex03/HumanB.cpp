/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:36:07 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:36:08 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(NULL) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void	HumanB::attack( void ) {
	if (!weapon) {
		std::cout << name << " attacks with their fists\n";
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon& newWeapon ) {
	weapon = &newWeapon;
}
