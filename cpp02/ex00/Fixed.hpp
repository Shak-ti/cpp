/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:16:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/03 09:05:41 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

	public:

		Fixed( void );
		Fixed( const Fixed& );
		~Fixed( void );
		Fixed &operator=( const Fixed& );
		
		int		getRawBits( void ) const ;
		void	setRawBits( int const raw ) ;

	private:

		int					_value;
		static const int	_frac = 8;
};

#endif
