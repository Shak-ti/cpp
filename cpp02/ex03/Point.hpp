/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:04:24 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/08 12:53:52 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include <cmath>
# include <fstream>
# include "Fixed.hpp"

# define P_TOGGLE 0

class Point {
	
	public:
	
		Point( void );
		Point( const Point& );
		Point( const float, const float );
		~Point( void );
		Point	&operator=( const Point& );
		
	private:
	
		const Fixed	x;
		const Fixed	y;
};

bool			bsp( Point const a, Point const b, Point const c, Point const point );
std::ostream&	operator<<( std::ostream& os, const Point& point );

#endif
 