/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:02 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/05 19:37:16 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

void	printResult(bool bsp)
{
	if (bsp)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
}

int main( void ) {
    Point	a(0, 0);
    Point	b(1, 0);
    Point	c(0, 1);
    Point	p1(0.25f, 0.25f);

	std::cout << "Test not triangle" << std::endl;
	printResult(bsp(a, a, c, p1));

	std::cout << "Test point in triangle" << std::endl;
	printResult(bsp(a, b, c, p1));

	std::cout << "Test point not in triangle" << std::endl;
	Point	p2(1, 1);
	printResult(bsp(a, b, c, p2));

	std::cout << "Test point on edge" << std::endl;
	Point	p3(0, 0.5f);
	printResult(bsp(a, b, c, p3));

	std::cout << "Test point on vertex" << std::endl;
	printResult(bsp(a, b, c, c));

	std::cout << "Test point far away" << std::endl;
	Point	p4(-354, -1234);
	printResult(bsp(a, b, c, p4));

	return 0;
}
