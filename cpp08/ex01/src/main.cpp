/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/05 14:16:11 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int	main( void ) {
	unsigned int	size = 5;
	Span			tab(size);
	std::vector<int>	toAdd;

	toAdd.push_back(3);
	toAdd.push_back(4);
	toAdd.push_back(5);
	
	tab.addNumber(1);
	tab.addNumber(2);
	tab.addNumbers(toAdd);
	tab.print();
	return (0);
}
