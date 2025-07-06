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
	
	std::cout << a + b << std::endl;
	if (a != b) {
		std::cout << "OK" << std::endl;
	} else {
		std::cout << "KO" << std::endl;
	}
	if (a > b) {
		std::cout << "OK" << std::endl;
	} else {
		std::cout << "KO" << std::endl;
	}
	if (!(a > b)) {
		std::cout << "OK" << std::endl;
	} else {
		std::cout << "KO" << std::endl;
	}
	if (a <= b) {
		std::cout << "OK" << std::endl;
	} else {
		std::cout << "KO" << std::endl;
	}
	if (!(a >= b)) {
		std::cout << "OK" << std::endl;
	} else {
		std::cout << "KO" << std::endl;
	}
	if (!(a == b)) {
		std::cout << "OK" << std::endl;
	} else {
		std::cout << "KO" << std::endl;
	}
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
