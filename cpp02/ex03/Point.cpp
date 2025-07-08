/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:25:15 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/08 13:09:33 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
	if (P_TOGGLE) {
		std::cout << "Point default constructor called" << std::endl;
	}
}

Point::Point( const Point& toCopy ) {
	if (P_TOGGLE) {
		std::cout << "Point copy constructor called" << std::endl;
	}
	*this = toCopy;
}

Point::Point( const float x_value, const float y_value ) : x(x_value), y(y_value) {
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
	this->x = rhs.getx();
	this->y = rhs.gety();
	return (*this);
}
