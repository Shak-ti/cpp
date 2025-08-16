/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:02:57 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 16:10:15 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat") {
	this->_catBrain = new Brain("Cat ideas");
	std::cout << "Cat created" << std::endl;
}

Cat::Cat( const Cat& toCopy ) : AAnimal(toCopy) {
	this->_catBrain = new Brain(*toCopy._catBrain);
	std::cout << "Cat created by copy" << std::endl;
}

Cat::~Cat( void ) {
	delete this->_catBrain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat&	Cat::operator=( const Cat& toCopy ) {
	std::cout << "Cat copy operator called" << std::endl;
	if ( this != &toCopy ) {
		AAnimal::operator=(toCopy);
		delete this->_catBrain;
		this->_catBrain = new Brain(*toCopy._catBrain);
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou" << std::endl;
}

void	Cat::setIdea( size_t id, std::string idea ) {
	this->_catBrain->setIdea(id, idea);
}

std::string	Cat::getIdea( size_t id ) const {
	return (this->_catBrain->getIdea(id));
}
