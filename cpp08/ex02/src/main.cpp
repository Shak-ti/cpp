/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/17 15:54:18 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int	main( void ) {

	std::cout << "TEST CONSTRUCTORS :" << std::endl;
	
	MutantStack<int> emptyStack;
	// emptyStack.print();
	
	MutantStack<int> testStack;

	testStack.push(5);
	// emptyStack.print();

	testStack.push(17);
	// emptyStack.print();

	std::cout << testStack.top() << std::endl;

	testStack.pop();

	std::cout << testStack.size() << std::endl;

	testStack.push(3);
	testStack.push(5);
	testStack.push(737);

	testStack.push(0);

	// MutantStack<int>::iterator it = testStack.begin();
	// MutantStack<int>::iterator ite = testStack.end();
	// ++it;
	// --it;

	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::stack<int> s(testStack);

	std::cout << std::endl;
	return (0);
}
	