/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:02:57 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 12:02:22 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat( const WrongCat& toCopy ) : WrongAnimal(toCopy) {
	std::cout << "WrongCat created by copy" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& toCopy ) {
	std::cout << "WrongCat copy operator called" << std::endl;
	if ( this != &toCopy ) {
		WrongAnimal::operator=(toCopy);
	}
	return (*this);
}

void	WrongCat::makeSound( void ) {
	std::cout << "Miaou" << std::endl;
}
