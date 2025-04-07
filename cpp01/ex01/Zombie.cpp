/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:35:15 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:35:16 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie( void ) {
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << _name << " destroyed\n";
	return ;
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::init_name( std::string name ) {
	_name = name;
}
