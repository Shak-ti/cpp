/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:54:07 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 13:02:33 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal( void ) : type("Default") {
	std::cout << "AAnimal created" << std::endl;
}

AAnimal::AAnimal( const AAnimal& toCopy ) : type(toCopy.type) {
	std::cout << "AAnimal created by copy" << std::endl;
}

AAnimal::AAnimal( const std::string type ) : type(type) {
	std::cout << "AAnimal of type " << type << " created" << std::endl;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destroyed" << std::endl;
}

AAnimal&	AAnimal::operator=( const AAnimal& toCopy ) {
	std::cout << "AAnimal copy operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

void	AAnimal::makeSound( void ) const {
	std::cout << "Random AAnimal Noise" << std::endl;
}

std::string	AAnimal::getType( void ) const {
	return (this->type);
}

void	AAnimal::setType( const std::string type ) {
	this->type = type;
}
