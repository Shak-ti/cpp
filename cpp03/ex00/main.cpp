/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:26:43 by sconiat           #+#    #+#             */
/*   Updated: 2025/06/28 13:07:33 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap	a("a");

	a.attack("b");
	a.takeDamage(5);
	a.beRepaired(4);
	a.beRepaired(5);
	return 0;
}
