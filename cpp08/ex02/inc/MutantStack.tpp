/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:49:27 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/19 15:35:33 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ) :
	std::stack<T>()
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T>& toCopy ) :
	std::stack<T>(toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {
	std::cout << "Destructor called" << std::endl;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=( MutantStack<T>& toCopy ) {
	std::cout << "Assignement operator called" << std::endl;
	if (this != &toCopy) {
		std::stack<T>::operator=(toCopy);
	}
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin( void )
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end( void )
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::rbegin( void )
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::rend( void )
{
	return (this->c.rend());
}
