/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/03 15:14:24 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"
#include <vector>
#include <list>

const char* NotFoundException::what() const throw() {
	return ("Couldn't find value in container");
}

int	main( void ) {
	std::vector<int>	Vector;
	std::list<int>		List;

	std::cout << "Testing with vectors :" << std::endl;
	Vector.push_back(0);
	Vector.push_back(1);
	Vector.push_back(2);
	Vector.push_back(3);
	Vector.push_back(4);
	Vector.push_back(5);

	int	needle;
	try {
		needle = 3;
		std::vector<int>::const_iterator it = easyfind(Vector, needle);
		std::cout << "Found " << needle << " at index "
			<< std::distance<std::vector<int>::const_iterator>(Vector.begin(), it) << std::endl;
	} catch ( const NotFoundException& exp ) {
		std::cout << needle << " not found" << std::endl;
	}
	try {
		needle = 5;
		std::vector<int>::const_iterator it = easyfind(Vector, needle);
		std::cout << "Found " << needle << " at index "
			<< std::distance<std::vector<int>::const_iterator>(Vector.begin(), it) << std::endl;
	} catch ( const NotFoundException& exp ) {
		std::cout << needle << " not found" << std::endl;
	}
	try {
		needle = 45;
		std::vector<int>::const_iterator it = easyfind(Vector, needle);
		std::cout << "Found " << needle << " at index "
			<< std::distance<std::vector<int>::const_iterator>(Vector.begin(), it) << std::endl;
	} catch ( const NotFoundException& exp ) {
		std::cout << needle << " not found" << std::endl;
	}
	
	std::cout << std::endl << "Testing with lists :" << std::endl;
	List.push_back(0);
	List.push_back(1);
	List.push_back(2);
	List.push_back(3);
	List.push_back(4);
	List.push_back(5);
	
	try {
		needle = 3;
		std::list<int>::const_iterator it = easyfind(List, needle);
		std::cout << "Found " << needle << " at index "
			<< std::distance<std::list<int>::const_iterator>(List.begin(), it) << std::endl;
	} catch ( const NotFoundException& exp ) {
		std::cout << needle << " not found" << std::endl;
	}
	try {
		needle = 5;
		std::list<int>::const_iterator it = easyfind(List, needle);
		std::cout << "Found " << needle << " at index "
			<< std::distance<std::list<int>::const_iterator>(List.begin(), it) << std::endl;
	} catch ( const NotFoundException& exp ) {
		std::cout << needle << " not found" << std::endl;
	}
	try {
		needle = 45;
		std::list<int>::const_iterator it = easyfind(List, needle);
		std::cout << "Found " << needle << " at index "
			<< std::distance<std::list<int>::const_iterator>(List.begin(), it) << std::endl;
	} catch ( const NotFoundException& exp ) {
		std::cout << needle << " not found" << std::endl;
	}
	return (0);
}
