/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:39:01 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 13:48:34 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

Serializer::Serializer( void ) {}

Serializer::Serializer( const Serializer& copy ) {
	static_cast<void>(copy); //explicitly marks copy as used in C++ style
}

Serializer::~Serializer( void ) {}

Serializer&	Serializer::operator=( const Serializer& copy ) {
	static_cast<void>(copy);
	return (*this);
}

uintptr_t	Serializer::serialize( Data* ptr ) {
	return (reinterpret_cast<uintptr_t>(ptr)); //explicit promotion
}

Data*		Serializer::deserialize( uintptr_t raw ) {
	return (reinterpret_cast<Data*>(raw)); //explicit demotion
}
