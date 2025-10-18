/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/18 16:04:53 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/iter.hpp"

void	plusFive(int& i) {
	i = i + 5;
}

int	main( void ) {
	int	tab[5] = {1, 42, 0, -5, 7};

	std::cout << "TEST AS REFERENCE : add five to each element" << std::endl;
	iter(tab, 5, plusFive);
	for (size_t i = 0; i < 5; i++) {
		std::cout << "Tab[" << i << "] = " << tab[i] << std::endl;
	}

	std::cout << std::endl << "TEST AS CONST REFERENCE (int) : print each element" << std::endl;
	iter(tab, 5, print);

	std::string	tab2[2] = {"un", "deux"};
	std::cout << std::endl << "TEST AS CONST REFERENCE (string) : print each element" << std::endl;
	iter(tab2, 2, print);
	
	return (0);
}
