/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:10:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/05 19:36:28 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	isNotTriangle( Point const a, Point const b, Point const c ) {
	return (a == b || b == c || a == c);
}

bool	crossProduct( Point const p1, Point const p2, Point const to_compare ) {
	Point	edge = p2 - p1;
	Point	v = to_compare - p1;
	Fixed	cross = (edge.getx() * v.gety() - edge.gety() * v.getx()).toFloat();

	return (cross > 0);
}

bool	bsp( Point const a, Point const b, Point const c, Point const p ) {
	
	if (isNotTriangle(a, b, c)) {
		std::cout << "not a triangle..." << std::endl;
		return (false);
	}

	bool o1 = crossProduct(a, b, p);
	bool o2 = crossProduct(b, c, p);
	bool o3 = crossProduct(c, a, p);
	
	return (o1 == o2 && o2 == o3);
}
