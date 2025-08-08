/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:26:43 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/08 10:11:07 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"

int main( void ) {
	DiamondTrap	a("a");

	a.attack("b");
	a.takeDamage(5);
	a.beRepaired(4);
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();

	a.takeDamage(500);
	a.attack("b");
	
	DiamondTrap	b;
	
	b = a;
	
	b.attack("a");
	b.takeDamage(5);
	b.beRepaired(4);
	b.highFivesGuys();
	b.guardGate();
	b.whoAmI();
	
	DiamondTrap	c(a);

	c.attack("b");
	c.takeDamage(5);
	c.beRepaired(4);
	c.highFivesGuys();
	c.guardGate();
	c.whoAmI();

	DiamondTrap	d;
	
	d.attack("b");
	d.takeDamage(5);
	d.beRepaired(4);
	d.highFivesGuys();
	d.guardGate();
	d.whoAmI();
	
	return 0;
}
