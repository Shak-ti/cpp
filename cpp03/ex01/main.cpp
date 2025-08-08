/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:26:43 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/08 09:59:44 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"

int main( void ) {
	
	ScavTrap	a("a");

	a.attack("b");
	a.takeDamage(5);
	a.beRepaired(4);
	a.guardGate();

	a.takeDamage(500);
	a.attack("b");
	
	ScavTrap	b;
	
	b = a;
	
	b.attack("a");
	b.takeDamage(5);
	b.beRepaired(4);
	b.guardGate();

	ScavTrap	c(a);

	c.attack("b");
	c.takeDamage(5);
	c.beRepaired(4);
	c.guardGate();

	ScavTrap	d;
	
	d.attack("b");
	d.takeDamage(5);
	d.beRepaired(4);
	d.guardGate();

	return 0;
}
