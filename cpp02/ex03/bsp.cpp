/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:10:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/17 20:05:23 by sconiat          ###   ########.fr       */
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
	Fixed cp = crossProduct(a, b, c);
	if (cp > 0)
		return (1);
	else if (cp < 0)
		return (-1);
	return (0);
}

bool	bsp( Point const a, Point const b, Point const c, Point const p ) {
	
	if (!isTriangle(a, b, c)) {
		std::cout << "not a triangle..." << std::endl;
		return (false);
	}
	
	int o1 = orient(a, b, p);
	int o2 = orient(b, c, p);
	int o3 = orient(c, a, p);
	
	return (o1 >= 0 && o2 >= 0 && o3 >= 0) || (o1 <= 0 && o2 <= 0 && o3 <= 0);
}
