/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:25 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/14 16:35:22 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template <typename T> class Array {
	public:
		Array( void ) : array(NULL) {}
		Array( unsigned int n ) : array(new T[n]) { //vérifier le fail
			for (size_t i = 0; i < n; i++) {
				this->array[i] = NULL;
			}
		}
		
		Array( const Array& toCopy ) : array(new T[toCopy.size()]) {
			for (size_t i = 0; i < toCopy.size(); i++) {
				this->array[i] = toCopy.array[i];
			}
		}
		
		~Array() {
			delete[] array;
		}
		
		Array&	operator=( Array const & ) {
			if ()
			return (*this);
		}
		
		T*	array;
		
		unsigned int	size( void )const {}

		class	OutOfBoundsException : public std::exception {
			public:
				const char*	what() const throw() {
					return ("Index is out of bounds");
				}
		};
};

#endif
