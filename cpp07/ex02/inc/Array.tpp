/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:56:30 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/18 15:54:33 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Array.hpp"

template <typename T>
Array<T>::Array( void ) : _size(0) {
	try {
		this->_array = new T[0];
	} catch ( std::bad_alloc& exp ) {
		std::cout << exp.what();
	};
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n) {
	try {
		this->_array = new T[n];
	} catch ( std::bad_alloc& exp ) {
		std::cout << exp.what();
	};
	
	for (size_t i = 0; i < n; i++) {
		this->_array[i] = T(); // default-constructed value
	}
	std::cout << "Array parameter constructor called" << std::endl;
}

template <typename T>
Array<T>::Array( const Array& toCopy ) : _size(toCopy.size()) {
	try {
		this->_array = new T[toCopy.size()];
	} catch ( std::bad_alloc& exp ) {
		std::cout << exp.what();
	};
	
	for (size_t i = 0; i < toCopy.size(); i++) {
		this->_array[i] = toCopy._array[i];
	}
	std::cout << "Array copy constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_array;
	std::cout << "Array destructor called" << std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator=( Array<T> const & toCopy ) {
	if ( this != &toCopy ) {
		delete[] this->_array;
		try {
			this->_array = new T[toCopy.size()];
		} catch ( std::bad_alloc& exp ) {
			std::cout << exp.what();
		};
		this->_size = toCopy.size();
		for (size_t i = 0; i < toCopy.size(); i++) {
			this->_array[i] = toCopy._array[i];
		}				
	}
	std::cout << "Array assignment operator called" << std::endl;
	return (*this);
}

template <typename T>
T&	Array<T>::operator[]( size_t index ) {
	if (index >= this->size()) {
		throw Array::OutOfBoundsException();
	}
	return (this->_array[index]);
}

template <typename T>
unsigned int	Array<T>::size( void )const {
	return (this->_size);
}

class	OutOfBoundsException : public std::exception {
	public:
		const char*	what() const throw() {
			return ("Index is out of bounds");
		}
};
