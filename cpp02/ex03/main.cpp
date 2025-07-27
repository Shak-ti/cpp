/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:02 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/27 14:14:29 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


void testTriangle(const Point& a, const Point& b, const Point& c, const Point& p) {
	std::cout << "\nTesting triangle with vertices: \n";
	std::cout << "  A(" << a.getx() << ", " << a.gety() << "), ";
	std::cout << "B(" << b.getx() << ", " << b.gety() << "), ";
	std::cout << "C(" << c.getx() << ", " << c.gety() << ")\n";
	std::cout << "  Point to test: P(" << p.getx() << ", " << p.gety() << ")\n";

	if (!isTriangle(a, b, c)) {
		std::cout << "Not a valid triangle!\n";
		return;
	}

	if (bsp(a, b, c, p))
		std::cout << "Point is inside the triangle\n";
	else
		std::cout << "Point is NOT inside the triangle\n";
}

int main( void ) {
    Point a(0.0f, 0.0f);
    Point b(1.0f, 0.0f);
    Point c(0.0f, 1.0f);

    Point inside(0.4f, 0.4f);
    Point outside(1.0f, 1.0f);
    Point edge(0.5f, 0.0f); // lies on edge AB
    Point vertex(0.0f, 0.0f); // same as point a

	testTriangle(a, b, c, inside);
	testTriangle(a, b, c, outside);
	testTriangle(a, b, c, edge);
	testTriangle(a, b, c, vertex);


	// Not a triangle - two identical points
	Point a2(1.0f, 1.0f);
	Point b2(1.0f, 1.0f); // same as a2
	Point c2(0.0f, 0.0f);
	Point p5(0.5f, 0.5f);
	testTriangle(a2, b2, c2, p5);

	// Not a triangle - all points aligned
	Point a3(0.0f, 0.0f);
	Point b3(1.0f, 1.0f);
	Point c3(2.0f, 2.0f); // aligned with a3 and b3
	Point p6(1.5f, 1.5f);
	testTriangle(a3, b3, c3, p6);

    return 0;
}
