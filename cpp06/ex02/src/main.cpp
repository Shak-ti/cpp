/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:30:44 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/14 15:53:03 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Classes.hpp"

int	main( void ) {
	Base	*Test;
	A		a;
	B		b;
	C		c;

	std::cout << "GENERATING RANDOM CLASS:" << std::endl;
	Test = generate();

	std::cout << std::endl << "IDENTIFYING RANDOM CLASS:" << std::endl;
	identify(Test);
	identify(*Test);

	std::cout << std::endl << "IDENTIFYING A BY REFERENCE:" << std::endl;
	identify(a);
	std::cout << std::endl << "IDENTIFYING B BY REFERENCE:" << std::endl;
	identify(b);
	std::cout << std::endl << "IDENTIFYING C BY REFERENCE:" << std::endl;
	identify(c);

	std::cout << std::endl << "IDENTIFYING A BY ADRESS:" << std::endl;
	identify(&a);
	std::cout << std::endl << "IDENTIFYING B BY ADRESS:" << std::endl;
	identify(&b);
	std::cout << std::endl << "IDENTIFYING C BY ADRESS:" << std::endl;
	identify(&c);
	
	delete(Test);
	return (0);
}
