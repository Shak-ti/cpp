/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:30:16 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 16:10:01 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	this->_dogBrain = new Brain("Dog ideas");
	std::cout << "Dog created" << std::endl;
}

Dog::Dog( const Dog& toCopy ) : Animal(toCopy) {
	this->_dogBrain = new Brain(*toCopy._dogBrain);
	std::cout << "Dog created by copy" << std::endl;
}

Dog::~Dog( void ) {
	delete this->_dogBrain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog&	Dog::operator=( const Dog& toCopy ) {
	std::cout << "Dog copy operator called" << std::endl;
	if ( this != &toCopy ) {
		Animal::operator=(toCopy);
		delete this->_dogBrain;
		this->_dogBrain = new Brain(*toCopy._dogBrain);
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Miaou" << std::endl;
}

void	Dog::setIdea( size_t id, std::string idea ) {
	this->_dogBrain->setIdea(id, idea);
}

std::string	Dog::getIdea( size_t id ) const {
	return (this->_dogBrain->getIdea(id));
}
