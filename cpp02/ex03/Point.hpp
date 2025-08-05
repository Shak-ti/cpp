/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:04:24 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/05 19:23:18 by sconiat          ###   ########.fr       */
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
		Point( const Fixed, const Fixed );
		~Point( void );
		Point	&operator=( const Point& );

		int		operator==( const Point& ) const;
		int		operator!=( const Point& ) const;
		Point	operator+( const Point& ) const ;
		Point	operator-( const Point& ) const ;

		Fixed	getx( void ) const;
		Fixed	gety( void ) const;
		
	private:
	
		const Fixed	x;
		const Fixed	y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const p );
bool	isTriangle( Point const a, Point const b, Point const c );

#endif
 