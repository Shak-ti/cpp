/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:02 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/03 12:08:48 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a(5);
	Fixed b(3);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "Result a + b : " << a + b << std::endl;
	std::cout << "Result a - b : " << a - b << std::endl;
	std::cout << "Result a * b : " << a * b << std::endl;
	std::cout << "Result a / b : " << a / b << std::endl;

	std::cout << "Initial value  : " << a << std::endl;
	std::cout << "Result of ++a  : " << ++a << std::endl;
	std::cout << "Value of a now : " << a << std::endl;
	std::cout << "Result of a++  : " << a++ << std::endl;
	std::cout << "Value of a now : " << a << std::endl;

	std::cout << "Result of --a  : " << --a << std::endl;
	std::cout << "Value of a now : " << a << std::endl;
	std::cout << "Result of a--  : " << a-- << std::endl;
	std::cout << "Value of a now : " << a << std::endl;

	if (a < b) {
		std::cout << "a < b  ==  true" << std::endl;
	} else {
		std::cout << "a < b  ==  false" << std::endl;
	}
	if (a <= b) {
		std::cout << "a <= b  ==  true" << std::endl;
	} else {
		std::cout << "a <= b  ==  false" << std::endl;
	}
	if (a > b) {
		std::cout << "a > b  ==  true" << std::endl;
	} else {
		std::cout << "a > b  ==  false" << std::endl;
	}
	if (a >= b) {
		std::cout << "a >= b  ==  true" << std::endl;
	} else {
		std::cout << "a >= b  ==  false" << std::endl;
	}
	if (a == b) {
		std::cout << "a == b  ==  true" << std::endl;
	} else {
		std::cout << "a == b  ==  false" << std::endl;
	}
	if (a != b) {
		std::cout << "a != b  ==  true" << std::endl;
	} else {
		std::cout << "a != b  ==  false" << std::endl;
	}

	std::cout << "Max of a and b : " << Fixed::max(a, b) << std::endl;
	std::cout << "Min of a and b : " << Fixed::min(a, b) << std::endl;

	Fixed const c = a;
	Fixed const d = b;


	std::cout << "Max of const a and b : " << Fixed::max(c, d) << std::endl;
	std::cout << "Min of const a and b : " << Fixed::min(c, d) << std::endl;

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}
