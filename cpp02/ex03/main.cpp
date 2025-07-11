/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:02 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/11 19:32:56 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point	a(0.0, 0.0);
	Point	b(1.0, 0.0);
	Point	c(0.0, 1.0);
	Point	p(2.5, 0.5);

	if (bsp(a, b, c, p))
		std::cout << "p is in triangle" << std::endl;
	else
		std::cout << "p not in triangle" << std::endl;
	return 0;
}
