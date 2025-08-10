/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:07:50 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 15:42:48 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain( void ) {
	for (size_t i = 0; i < 100; ++i)
		this->ideas[i] = "";	
	if (B_TOGGLE)
		std::cout << "Brain created" << std::endl;
}

Brain::Brain( const Brain& ) {
	if (B_TOGGLE)
		std::cout << "Brain created by copy" << std::endl;
}

Brain::~Brain( void ) {
	if (B_TOGGLE)
		std::cout << "Brain destroyed" << std::endl;
}

Brain&	Brain::operator=( const Brain& toCopy ) {
	for (size_t i = 0; i < 100; ++i)
		this->setIdea(i, toCopy.getIdea(i));		
	if (B_TOGGLE)
		std::cout << "Brain copy operator called" << std::endl;
	return (*this);
}

std::string	Brain::getIdea( size_t id ) const {
	return (this->ideas[id]);
}

void	Brain::setIdea( size_t id, std::string newIdea ) {
	this->ideas[id] = newIdea;
}
