/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:54:07 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 11:26:37 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("Default") {
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& toCopy ) : type(toCopy.type) {
	std::cout << "WrongAnimal created by copy" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string type ) : type(type) {
	std::cout << "WrongAnimal of type " << type << " created" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& toCopy ) {
	std::cout << "WrongAnimal copy operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Random WrongAnimal Noise" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}

void	WrongAnimal::setType( const std::string type ) {
	this->type = type;
}
