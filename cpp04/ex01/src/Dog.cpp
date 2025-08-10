/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:30:16 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 13:02:58 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog created" << std::endl;
}

Dog::Dog( const Dog& toCopy ) : Animal(toCopy) {
	std::cout << "Dog created by copy" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog destroyed" << std::endl;
}

Dog&	Dog::operator=( const Dog& toCopy ) {
	std::cout << "Dog copy operator called" << std::endl;
	if ( this != &toCopy ) {
		Animal::operator=(toCopy);
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Ouaf" << std::endl;
}
