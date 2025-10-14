/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/14 15:14:25 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/iter.hpp"

void	plusFive(int& i) {
	i = i + 5;
}

void	printPlusFive(const int& i) {
	std::cout << i + 5 << std::endl;
}

int	main( void ) {
	int	tab[5] = {1, 42, 0, -5, 7};

	std::cout << "TEST AS REFERENCE" << std::endl;
	iter(tab, 5, plusFive);
	for (size_t i = 0; i < 5; i++) {
		std::cout << "Tab[" << i << "] = " << tab[i] << std::endl;
	}

	std::cout << std::endl << "TEST AS CONST REFERENCE" << std::endl;
	iter(tab, 5, printPlusFive);
	return (0);
}
