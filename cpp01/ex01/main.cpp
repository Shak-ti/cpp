/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:35:09 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:35:10 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main() {
	int		N = 4;
	Zombie* test = zombieHorde(N, "Ptr");

	for (int i = 0; i < N; i++)
		test[i].announce();
	delete [] test;
	return (0);
}
