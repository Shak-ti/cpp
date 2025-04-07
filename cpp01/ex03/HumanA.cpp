/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:36:00 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:36:01 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& Weapon ) : name(name), weapon(Weapon) {

}

HumanA::~HumanA( void ) {

}

void	HumanA::attack( void ) {
	std::cout << name << " attacks with their " << weapon.getType();
	std::cout << std::endl;
}
