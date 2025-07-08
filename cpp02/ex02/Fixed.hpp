/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:16:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/05 13:30:20 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
# include <fstream>

# define TOGGLE 0

class Fixed {

	public:

		Fixed( void ) ;
		Fixed( const Fixed& ) ;
		Fixed( const int ) ;
		Fixed( const float ) ;
		~Fixed( void ) ;
		Fixed	&operator=( const Fixed& ) ;

		int 	operator>( const Fixed& ) const ;
		int		operator<( const Fixed& ) const ;
		int		operator>=( const Fixed& ) const ;
		int		operator<=( const Fixed& ) const ;
		int		operator==( const Fixed& ) const ;
		int		operator!=( const Fixed& ) const ;

		Fixed	operator+( const Fixed& ) const ;
		Fixed	operator-( const Fixed& ) const ;
		Fixed	operator*( const Fixed& ) const ;
		Fixed	operator/( const Fixed& ) ;
		Fixed	operator++( int ) ; //suffixe
		Fixed	operator--( int ) ;
		Fixed	operator++( void ) ; //préfixe
		Fixed	operator--( void ) ;
		
		static Fixed		max( Fixed&, Fixed& ) ;
		static Fixed const	max( const Fixed&, const Fixed& ) ;
		static Fixed		min( Fixed&, Fixed& ) ;
		static Fixed const	min( const Fixed&, const Fixed& ) ;

		int		getRawBits( void ) const ;
		void	setRawBits( int const raw ) ;
		float	toFloat( void ) const ;
		int		toInt( void ) const ;

	private:

		int					_value;
		static const int	_frac = 8;

};
	
std::ostream& operator<<( std::ostream& os, const Fixed& nbr );

#endif
