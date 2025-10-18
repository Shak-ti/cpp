/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:25 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/18 15:19:54 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template <typename T> class Array {
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array( void );		
		Array( unsigned int );
		Array( const Array& );
		~Array();
		
		Array&			operator=( Array<T> const & );
		T&				operator[]( size_t );
		unsigned int	size( void ) const;

		class	OutOfBoundsException : public std::exception {
			public:
				const char*	what() const throw() {
					return ("Index is out of bounds");
				}
		};
};

# include "../inc/Array.tpp"
#endif
