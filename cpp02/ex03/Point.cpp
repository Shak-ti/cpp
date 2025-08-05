/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:25:15 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/05 19:23:22 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {
	if (P_TOGGLE) {
		std::cout << "Point default constructor called" << std::endl;
	}
}

Point::Point( const Point& toCopy ) : x(toCopy.getx()), y(toCopy.gety()) {
	if (P_TOGGLE) {
		std::cout << "Point copy constructor called" << std::endl;
	}
}

Point::Point( const float x_value, const float y_value ) : x(x_value), y(y_value) {
	if (P_TOGGLE) {
		std::cout << "Point constructor called" << std::endl;
	}
}

Point::Point( const Fixed x_value, const Fixed y_value ) : x(x_value), y(y_value) {
	if (P_TOGGLE) {
		std::cout << "Point constructor called" << std::endl;
	}
}

Point::~Point() {
	if (P_TOGGLE) {
		std::cout << "Point destructor called" << std::endl;
	}
}

Point&	Point::operator=( const Point& rhs ) {
	if (P_TOGGLE) {
		std::cout << "Point copy assignment operator called" << std::endl;
	}
	(void)rhs;
	return (*this);
}

int	Point::operator!=( const Point& rhs ) const {
		if (this == &rhs) {
		std::cout << "Comparing same instance" << std::endl;
	}
	return ((this->x != rhs.getx()) && (this->y != rhs.y));
}

int	Point::operator==( const Point& rhs ) const {
		if (this == &rhs) {
		std::cout << "Comparing same instance" << std::endl;
	}
	return ((this->x == rhs.getx()) && (this->y == rhs.y));
}

Point Point::operator+( const Point& rhs) const {
	return (Point(this->x + rhs.x, this->y + rhs.y));
}

Point Point::operator-( const Point& rhs) const {
	return (Point(this->x - rhs.x, this->y - rhs.y));
}

Fixed	Point::getx( void ) const {
	return (this->x);
}

Fixed	Point::gety( void ) const {
	return (this->y);
}
