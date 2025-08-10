/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:54:07 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 13:02:33 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal( void ) : type("Default") {
	std::cout << "Animal created" << std::endl;
}

Animal::Animal( const Animal& toCopy ) : type(toCopy.type) {
	std::cout << "Animal created by copy" << std::endl;
}

Animal::Animal( const std::string type ) : type(type) {
	std::cout << "Animal of type " << type << " created" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destroyed" << std::endl;
}

Animal&	Animal::operator=( const Animal& toCopy ) {
	std::cout << "Animal copy operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

void	Animal::makeSound( void ) const {
	std::cout << "Random Animal Noise" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}

void	Animal::setType( const std::string type ) {
	this->type = type;
}
