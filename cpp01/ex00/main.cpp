/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:34:45 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:34:46 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main() {
	Zombie* test = newZombie("Ptr");

	std::cout << "Zombie en pointeur:\n\n";
	test->announce();
	delete test;
	std::cout << "\nZombie en référence:\n\n";
	randomChump("Ref");
	return (0);
}
