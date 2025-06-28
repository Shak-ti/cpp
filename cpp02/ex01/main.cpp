/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:02 by sconiat           #+#    #+#             */
/*   Updated: 2025/05/14 11:09:25 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	std::cout << "float : " << 42.42f << std::endl;
	Fixed	a( 42.42f );

	std::cout << "a is " << a << std::endl;
	
	// Fixed a;
	// Fixed const b( 55 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );

	// a = Fixed( 1234.4321f );

	// std::cout << "a is " << a << std::endl;
	// a = 56;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "a is " << a << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
