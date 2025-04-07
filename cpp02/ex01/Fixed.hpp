/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:16:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 15:53:13 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
# include <fstream>

class Fixed {

	public:

		Fixed( void ) ;
		Fixed( const Fixed& ) ;
		Fixed( const int ) ;
		Fixed( const float ) ;
		~Fixed( void ) ;
		Fixed &operator=( const Fixed& );
		ostream &operator<<( ostream&, const Fixed& );
		
		int		getRawBits( void ) const ;
		void	setRawBits( int const raw ) ;
		float	toFloat( void ) const ;
		int		toInt( void ) const ;

	private:

		//valeur du nombre en virgule fixe
		int					_value;
		//nb bit de la partie fractionnaire
		static const int	_frac;
};

#endif
