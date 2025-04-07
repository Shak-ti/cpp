/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:12:50 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 13:12:51 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl	test;

	test.complain("debug");
	std::cout << std::endl;
	test.complain("info");
	std::cout << std::endl;
	test.complain("warning");
	std::cout << std::endl;
	test.complain("error");
	std::cout << std::endl;
	test.complain("blabla");
	std::cout << std::endl;

	return 0;
}
