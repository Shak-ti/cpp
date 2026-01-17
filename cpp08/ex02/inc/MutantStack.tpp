/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:49:27 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/17 19:17:28 by sconiat          ###   ########.fr       */
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
	}
	return (*this);
}
