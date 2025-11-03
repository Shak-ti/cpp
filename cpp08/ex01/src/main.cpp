/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/03 11:37:01 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"
#include <vector>
#include <list>

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

	easyfind(Vector, 3);
	easyfind(Vector, 5);
	easyfind(Vector, 45);
	
	std::cout << std::endl << "Testing with lists :" << std::endl;
	List.push_back(0);
	List.push_back(1);
	List.push_back(2);
	List.push_back(3);
	List.push_back(4);
	List.push_back(5);
	
	easyfind(List, 3);
	easyfind(List, 5);
	easyfind(List, -45);
	return (0);
}
