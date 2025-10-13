/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:30:44 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 13:36:34 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"
#include "../inc/Serializer.hpp"

int	main( void ) {
	Data		Test;
	Data		*Res;
	uintptr_t	ptr;

	Test.data = 42;
	std::cout << "Test address : " << &Test << std::endl;
	std::cout << "Test->data : " << Test.data << std::endl;
	ptr = Serializer::serialize(&Test);
	std::cout << "ptr value : " << ptr << std::endl;
	Res = Serializer::deserialize(ptr);
	std::cout << "Res address : " << Res << std::endl;
	std::cout << "Res->data : " << Res->data << std::endl;
	return (0);
}
