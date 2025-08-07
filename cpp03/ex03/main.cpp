/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:26:43 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/07 13:05:20 by sconiat          ###   ########.fr       */
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
	a.beRepaired(3);
	a.whoAmI();
	return 0;
}
