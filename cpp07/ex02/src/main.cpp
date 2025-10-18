/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/18 15:54:50 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Array.hpp"

int	main( void ) {
	std::cout << "TEST ARRAY INT" << std::endl << std::endl;
	
	try {
		size_t	size = 10;
		Array	<int>TestInt(size);
		try {
			for (size_t i = 0; i < size; i++) {
				TestInt[i] = i;
				std::cout << "TestInt[" << i << "] = " << TestInt[i] << std::endl;
			}
		} catch ( const Array<int>::OutOfBoundsException& exp ) {
			std::cout << exp.what() << std::endl;
		}
	} catch ( const std::bad_alloc& exp ) {
		std::cout << exp.what() << std::endl;
	}

	std::cout << std::endl << "TEST ARRAY STD::STRING" << std::endl << std::endl;
	
	try {
		size_t	size = 10;
		Array	<std::string>TestString(size);
		std::string	tab[2] = {"odd", "even"};
		try {
			for (size_t i = 0; i < size; i++) {
				TestString[i] = tab[i % 2];
				std::cout << "TestString[" << i << "] = " << TestString[i] << std::endl;
			}
		} catch ( const Array<std::string>::OutOfBoundsException& exp ) {
			std::cout << exp.what() << std::endl;
		}
	} catch ( const std::bad_alloc& exp ) {
		std::cout << exp.what() << std::endl;
	}
	
	std::cout << std::endl << "TEST ARRAY DEFAULT CONSTRUCTOR" << std::endl << std::endl;

	try {
		Array	<int>TestDefault;
	} catch ( const std::bad_alloc& exp ) {
		std::cout << exp.what() << std::endl;
	}

	std::cout << std::endl << "TEST ARRAY OF SIZE ZERO" << std::endl << std::endl;

	try {
		Array	<int>TestSizeZero(10);
	} catch (const std::bad_alloc& exp) {
		std::cout << exp.what() << std::endl;
	}
	
	std::cout << std::endl << "TEST ACCESSING ARRAY OF SIZE ZERO" << std::endl << std::endl;

	try {
		Array	<int>TestSizeZero(0);
		
		TestSizeZero[0] = 42;
	} catch (const Array<int>::OutOfBoundsException& exp) {
		std::cout << exp.what() << std::endl;
	} catch (const std::bad_alloc& exp) {
		std::cout << exp.what() << std::endl;
	}

	std::cout << std::endl << "TEST ARRAY COPY CONSTRUCTOR" << std::endl << std::endl;
	
	try {
		size_t	size = 4;
		Array	<std::string>TestToCopy(size);
		std::string	tab[4] = {"un", "deux", "trois", "quatre"};
		try {
			for (size_t i = 0; i < size; i++) {
				TestToCopy[i] = tab[i];
				std::cout << "TestToCopy[" << i << "] = " << TestToCopy[i] << std::endl;
			}
		} catch ( const Array<std::string>::OutOfBoundsException& exp ) {
				std::cout << exp.what() << std::endl;
		}
		std::cout << std::endl;
		
		Array	<std::string>TestCopy(TestToCopy);
		try {
			for (size_t i = 0; i < size + 1; i++) {
				std::cout << "TestCopy[" << i << "] = " << TestCopy[i] << std::endl;
			}
		} catch ( const Array<std::string>::OutOfBoundsException& exp ) {
			std::cout << exp.what() << std::endl;
		}
	} catch ( const std::bad_alloc& exp ) {
		std::cout << exp.what() << std::endl;
	}
	
	std::cout << std::endl << "TEST ARRAY ASSIGNEMENT OPERATOR" << std::endl << std::endl;
	
	try {
		size_t	size = 4;
		Array	<double>TestToCopy2(size);
		double	tab[4] = {1.0, 2.0, 3.0, 4.0};
		try {
			for (size_t i = 0; i < size; i++) {
				TestToCopy2[i] = tab[i];
				std::cout << "TestToCopy2[" << i << "] = " << TestToCopy2[i] << std::endl;
			}
		} catch ( const Array<double>::OutOfBoundsException& exp ) {
			std::cout << exp.what() << std::endl;
		}
		std::cout << std::endl;
		
		Array	<double>TestCopy2;
		try {
			std::cout << "TestCopy2 contain : " << TestCopy2[0] << std::endl;
		} catch ( const Array<double>::OutOfBoundsException& exp ) {
			std::cout << exp.what() << std::endl;
		}
		
		try {
			TestCopy2 = TestToCopy2;
			for (size_t i = 0; i < size + 1; i++) {
				std::cout << "TestCopy2[" << i << "] = " << TestCopy2[i] << std::endl;
			}
		} catch ( const Array<double>::OutOfBoundsException& exp ) {
			std::cout << exp.what() << std::endl;
		}
	} catch ( const std::bad_alloc& exp ) {
		std::cout << exp.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl << "END" << std::endl;
	return (0);
}
