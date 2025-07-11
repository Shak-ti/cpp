/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:10:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/11 19:30:22 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	isTriangle( Point const a, Point const b, Point const c ) {
	return (a == b || b == c || a == c);
}

Fixed	crossProduct( Point const a, Point const b, Point const c ) {
	Point	vectorAB(b.getx() - a.getx(), b.gety() - a.gety());
	Point	vectorAC(c.getx() - a.getx(), c.gety() - a.gety());
	
	return (vectorAB.getx() * vectorAC.gety() - vectorAB.gety() * vectorAC.getx());
}

int	orient(Point const a, Point const b, Point const c) {
	if (crossProduct(a, b, c) > 0)
		return (1);
	return (-1);
}

bool	bsp( Point const a, Point const b, Point const c, Point const p ) {
	
	if (!isTriangle(a, b, c)) {
		std::cout << "not a triangle..." << std::endl;
		return (false);
	}
	return (orient(a, b, p) == orient(b, c, p) && orient(b, c, p) == orient(c, a, p) && orient(a, b, p) != 0);
}
