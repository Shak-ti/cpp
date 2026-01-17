/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:49:27 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/17 15:54:04 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ) :
	_data()
{
	std::cout << "Default constructor called, N = 0" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack( MutantStack<T>& toCopy ) :
	_data()
{
	std::cout << "Copy constructor called" << std::endl;
	_data = toCopy._data;
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {
	std::cout << "Destructor called" << std::endl;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=( MutantStack<T>& toCopy ) {
	std::cout << "Assignement operator called" << std::endl;
	if (this != &toCopy) {
		this->_data = toCopy._data;
	}
	return (*this);
}

template <typename T>
bool	MutantStack<T>::empty( void ) const
{
	return (this->_data.empty());
}

template <typename T>
unsigned int	MutantStack<T>::size( void ) const
{
	return (this->_data.size());
}

template <typename T>
T&		MutantStack<T>::top( void )
{
	return (this->_data.top());
}

template <typename T>
void	MutantStack<T>::push( const T& newObject )
{
	this->_data.push(newObject);
}

template <typename T>
void	MutantStack<T>::emplace( T& object )
{
	this->_data.emplace(object);
}

template <typename T>
void	MutantStack<T>::pop( void )
{
	this->_data.pop();
}

template <typename T>
void	MutantStack<T>::swap( std::stack<T>& toSwapWith ) //non member ?
{
	this->_data.swap(toSwapWith);
}

//no iterator so not possible for now
// template <typename T>
// void	MutantStack<T>::print( void ) const {
// 	std::cout << "MutantStack (size : " << this->_data.size() << ") : [";
// 	if ( this->_data.size() ) {
// 		for (size_t i = 0; i < this->_data.size(); i++) {
// 			if ( i < this->_data.size() ) {
// 				std::cout << this->_data[i];
// 			} else {
// 				std::cout << "x";
// 			}
// 			if ( i + 1 < this->_data.size() ) {
// 				std::cout << ", ";
// 			}
// 		}
// 	}	
// 	std::cout << "]" << std::endl;
// }

// template <typename T>
// const char* MutantStack<T>::NoMutantStackException::what() const throw() {
// 	return ("No MutantStack can be found");
// }

// template <typename T>
// const char* MutantStack<T>::MutantStackFullException::what() const throw() {
// 	return ("MutantStack is full / too much numbers to add, can't add numbers");
// }
