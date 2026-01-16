/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/16 17:02:51 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int	main( void ) {
	std::cout << "SPAN OF SIZE 5 :" << std::endl;
	unsigned int		size = 5;
	Span				TestSpan(size);
	std::vector<int>	toAdd;

	toAdd.push_back(3);
	toAdd.push_back(4);
	toAdd.push_back(5);
	
	try {
		std::cout << std::endl << "	-> TRYING TO ADD NUMBERS IN NOT FULL SPAN" << std::endl;
		TestSpan.addNumber(1);
		std::cout << "Number added succesfully, result :" << std::endl;
		TestSpan.print();
		TestSpan.addNumber(2);
		std::cout << "Number added succesfully, result :" << std::endl;
		TestSpan.print();
		TestSpan.addNumbers(toAdd);
		std::cout << "Numbers added succesfully, result :" << std::endl;
		TestSpan.print();
		std::cout << std::endl << "	-> TRYING TO ADD NUMBERS IN FULL SPAN" << std::endl;
		TestSpan.addNumbers(toAdd);
		std::cout << "Numbers added succesfully" << std::endl;
		TestSpan.print();
	} catch ( Span::SpanFullException& except ) {
		std::cout << except.what() << std::endl;
	}
	
	try {
		std::cout << std::endl << "	-> FINDING LONGEST SPAN" << std::endl;
		std::cout << "The longest span is " << TestSpan.longestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}
	try {
		std::cout << std::endl << "	-> FINDING SHORTEST SPAN" << std::endl;
		std::cout << "The shortest span is " << TestSpan.shortestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl;
	std::cout << "SPAN OF SIZE 0 :" << std::endl;
	size = 0;
	Span				ZeroSpan(size);
	ZeroSpan.print();
	
	try	{
		std::cout << std::endl << "	-> TRYING TO ADD NUMBERS IN SPAN OF SIZE ZERO" << std::endl;
		ZeroSpan.addNumber(1);
		std::cout << "Numbers added succesfully, result :" << std::endl;
		ZeroSpan.print();
	} catch ( Span::SpanFullException& except ) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "	-> FINDING LONGEST SPAN" << std::endl;
	try {
		std::cout << "The longest span is " << ZeroSpan.longestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "	-> FINDING SHORTEST SPAN" << std::endl;
	try {
		std::cout << "The shortest span is " << ZeroSpan.shortestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "SPAN OF SIZE 1 :" << std::endl;
	size = 1;
	Span				OneSpan(size);
	
	OneSpan.print();
	try	{
		std::cout << std::endl << "	-> TRYING TO ADD NUMBERS IN SPAN OF SIZE ONE" << std::endl;
		OneSpan.addNumber(1);
		std::cout << "Numbers added succesfully, result :" << std::endl;
		OneSpan.print();
		OneSpan.addNumber(2);
		std::cout << "Numbers added succesfully, result :" << std::endl;
		OneSpan.print();
	} catch ( Span::SpanFullException& except ) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "	-> FINDING LONGEST SPAN" << std::endl;
	try {
		std::cout << "The longest span is " << OneSpan.longestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "	-> FINDING SHORTEST SPAN" << std::endl;
	try {
		std::cout << "The shortest span is " << OneSpan.shortestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "VERY BIG SPAN :" << std::endl;
	size = 1000; //can update to more
	Span				VeryBigSpan(size);
	VeryBigSpan.print();

	std::vector<int>	toAddBig;
	for (size_t i = 3; i <= size; i++)
		toAddBig.push_back(i);

	try	{
		std::cout << std::endl << "	-> TRYING TO ADD NUMBERS IN VERY BIG SPAN" << std::endl;
		VeryBigSpan.addNumber(1);
		std::cout << "Numbers added succesfully, result :" << std::endl;
		VeryBigSpan.print();
		VeryBigSpan.addNumber(2);
		std::cout << "Numbers added succesfully, result :" << std::endl;
		VeryBigSpan.print();
		VeryBigSpan.addNumbers(toAddBig);
		std::cout << "Numbers added succesfully, result :" << std::endl;
		VeryBigSpan.print();
	} catch ( Span::SpanFullException& except ) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "	-> FINDING LONGEST SPAN" << std::endl;
	try {
		std::cout << "The longest span is " << VeryBigSpan.longestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "	-> FINDING SHORTEST SPAN" << std::endl;
	try {
		std::cout << "The shortest span is " << VeryBigSpan.shortestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl;
	std::cout << "NEGATIVE SPAN :" << std::endl;
	size = 5;
	Span				NegativeSpan(size);
	NegativeSpan.print();
	
	std::vector<int>	toAddNegative;

	toAddNegative.push_back(-2);
	toAddNegative.push_back(-3);
	toAddNegative.push_back(-4);
	
	try {
		std::cout << std::endl << "	-> TRYING TO ADD NEGATIVE NUMBERS" << std::endl;
		NegativeSpan.addNumber(0);
		std::cout << "Number added succesfully, result :" << std::endl;
		NegativeSpan.print();
		NegativeSpan.addNumber(-1);
		std::cout << "Number added succesfully, result :" << std::endl;
		NegativeSpan.print();
		NegativeSpan.addNumbers(toAddNegative);
		std::cout << "Numbers added succesfully, result :" << std::endl;
		NegativeSpan.print();
	} catch ( Span::SpanFullException& except ) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "	-> FINDING LONGEST SPAN" << std::endl;
	try {
		std::cout << "The longest span is " << NegativeSpan.longestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "	-> FINDING SHORTEST SPAN" << std::endl;
	try {
		std::cout << "The shortest span is " << NegativeSpan.shortestSpan() << std::endl;
	} catch ( Span::NoSpanException& except ) {
		std::cout << except.what() << std::endl;
	}

	std::cout << std::endl;
	return (0);
}
