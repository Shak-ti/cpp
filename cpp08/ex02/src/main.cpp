/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/21 14:04:02 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int	main( void ) {

	std::cout << "MAIN DU SUJET :" << std::endl;
	
	MutantStack<int> testStack;

	testStack.push(5);

	testStack.push(17);

	std::cout << testStack.top() << std::endl;

	testStack.pop();

	std::cout << testStack.size() << std::endl;

	testStack.push(3);
	testStack.push(5);
	testStack.push(737);

	testStack.push(0);
	
	MutantStack<int>::iterator it = testStack.begin();
	MutantStack<int>::iterator ite = testStack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> re(testStack);

	std::cout << std::endl << "PLUS DE TESTS" << std::endl << std::endl;

	std::cout << "TEST DEFAULT CONSTRUCTORS :" << std::endl;

	MutantStack<int> s;
	std::cout << "empty: " << s.empty() << " (return 1 if true)" << std::endl;
	std::cout << "size : " << s.size() << " (return stack size)" << std::endl;

	std::cout << std::endl << "TEST PUSH : (add element to stack : 10, 20, 30)" << std::endl;
	s.push(10);
	s.push(20);
	s.push(30);

	std::cout << "top  : " << s.top() << " (return top element of stack)" << std::endl;
	std::cout << "size : " << s.size() << std::endl;

	std::cout << std::endl << "TEST POP : (remove top element from stack)" << std::endl;
	s.pop();
	std::cout << "top  : " << s.top() << std::endl;
	std::cout << "size : " << s.size() << std::endl;

	std::cout << std::endl << "TEST LIFO ORDER : (emptying stack)" << std::endl;
	while (!s.empty())
	{
		std::cout << "top: " << s.top() << std::endl;
		s.pop();
	}

	std::cout << "empty after pop all: " << s.empty() << std::endl;

	std::cout << std::endl << "TEST COPY CONSTRUCTOR : (original stack : 1, 2, 3)" << std::endl;
	s.push(1);
	s.push(2);
	s.push(3);

	MutantStack<int> copy(s);
	std::cout << "copy.top(): " << copy.top() << std::endl;

	copy.pop();
	std::cout << "copy.top(): " << copy.top() << " (after pop of first element)" << std::endl;

	std::cout << std::endl << "TEST ASSIGNEMENT OPERATOR : (original stack : 1, 2, 3)" << std::endl;
	MutantStack<int> assigned;
	assigned = s;

	std::cout << "assigned.top(): " << assigned.top() << std::endl;
	std::cout << "assigned.size(): " << assigned.size() << std::endl;

	std::cout << std::endl << "TEST CONST : " << std::endl;
	const MutantStack<int> const_stack(s);
	std::cout << "Const stack constructed from original stack : 1, 2, 3" << std::endl;
	std::cout << "const_stack.top(): " << const_stack.top() << std::endl;
	std::cout << "const_stack.size(): " << const_stack.size() << std::endl;
	std::cout << "const_stack.empty(): " << const_stack.empty() << std::endl;

	std::cout << std::endl << "TEST BIG STACK :" << std::endl;
	MutantStack<int> stress;
	for (int i = 0; i < 1000; ++i)
		stress.push(i);
	std::cout << "Pushing numbers from 0 to 999 (size is 1000)" << std::endl;
	std::cout << "stress.size(): " << stress.size() << std::endl;
	std::cout << "stress.top(): " << stress.top() << std::endl;

	for (int i = 0; i < 1000; ++i)
		stress.pop();
	std::cout << "Poping all numbers" << std::endl;
	std::cout << "stress.empty(): " << stress.empty() << std::endl;
	
	std::cout << std::endl;

	std::cout << std::endl << "TEST ITERATORS : (original stack : 5, 10, 15)" << std::endl;
	MutantStack<int> it_stack;
	it_stack.push(5);
	it_stack.push(10);
	it_stack.push(15);

	for (MutantStack<int>::iterator it = it_stack.begin(); it != it_stack.end(); ++it)
		std::cout << "Number is :" << *it << std::endl;
	
	return (0);
}
