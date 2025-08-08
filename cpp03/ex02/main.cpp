/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:26:43 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/08 10:07:50 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"

int main( void ) {
	FragTrap	a("a");

	a.attack("b");
	a.takeDamage(5);
	a.beRepaired(4);
	a.highFivesGuys();

	a.takeDamage(500);
	a.attack("b");
	
	FragTrap	b;
	
	b = a;
	
	b.attack("a");
	b.takeDamage(5);
	b.beRepaired(4);
	b.highFivesGuys();

	FragTrap	c(a);

	c.attack("b");
	c.takeDamage(5);
	c.beRepaired(4);
	c.highFivesGuys();

	FragTrap	d;
	
	d.attack("b");
	d.takeDamage(5);
	d.beRepaired(4);
	d.highFivesGuys();
	return 0;
}
