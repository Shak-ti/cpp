/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:12:24 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 13:12:27 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {

	if (ac != 2) {
		std::cout << "Usage : ./harlFilter levelToFilter\n";
		return 1;
	}
	Harl		harl;
	std::string	threshold = av[1];
	std::map< std::string, int> thresholds;

	thresholds["DEBUG"] = 4;
	thresholds["INFO"] = 3;
	thresholds["WARNING"] = 2;
	thresholds["ERROR"] = 1;
	switch (thresholds[threshold]) {
		case 4:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("debug");
			std::cout << std::endl;
		case 3:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("info");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("warning");
			std::cout << std::endl;
		case 1:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("error");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
	return 0;
}
