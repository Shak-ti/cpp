/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:04:42 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 16:05:43 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Classes.hpp"

Base::~Base( void ) {
	std::cout << "Base destroyer called" << std::endl;
}

Base*	generate( void ) {
	int		value = rand();
	Base*	test;
	if (value % 3 == 0) {
		test = new A;
	} else if (value % 3 == 1) {
		test = new B;
	} else {
		test = new C;
	}
	return(test);
}

void	identify( Base* p ) {
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);
	
	static_cast<void>(a);
	static_cast<void>(b);
	static_cast<void>(c);
	if (a != NULL) {
		std::cout << "This is an A ! (by adress)" << std::endl;
	} else if (b != NULL) {
		std::cout << "This is a B ! (by adress)" << std::endl;
	} else if (c != NULL) {
		std::cout << "This is a C ! (by adress)" << std::endl;
	} else {
		std::cout << "Unknown Type" << std::endl;
	}
}

void	identify( Base& p ) {
	try {
		A&	a = dynamic_cast<A&>(p);
		std::cout << "This is an A ! (by reference)" << std::endl;
		static_cast<void>(a);
	}
	catch (std::bad_cast& bc) {}
	try {
		B&	b = dynamic_cast<B&>(p);
		std::cout << "This is a B ! (by reference)" << std::endl;	
		static_cast<void>(b);
	}
	catch (std::bad_cast& bc) {}
	try {
		C&	c = dynamic_cast<C&>(p);
		std::cout << "This is a C ! (by reference)" << std::endl;	
		static_cast<void>(c);
	}
	catch (std::bad_cast& bc) {}
}
