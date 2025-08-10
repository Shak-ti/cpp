/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:02:57 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 16:31:37 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	this->_catBrain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->_catBrain->setIdea(i, "Cat ideas");	
	std::cout << "Cat created" << std::endl;
}

Cat::Cat( const Cat& toCopy ) : Animal(toCopy) {
	this->_catBrain = toCopy._catBrain;
	std::cout << "Cat created by copy" << std::endl;
}

Cat::~Cat( void ) {
	delete this->_catBrain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat&	Cat::operator=( const Cat& toCopy ) {
	std::cout << "Cat copy operator called" << std::endl;
	if ( this != &toCopy ) {
		Animal::operator=(toCopy);
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou" << std::endl;
}
