/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:36:21 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:36:22 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string name ) : type(name) {

}

Weapon::~Weapon( void ) {

}

void	Weapon::setType( std::string name ) {
	type = name;
}

std::string const	&Weapon::getType( void ) {
	std::string& ref = type;
	return ref;
}
