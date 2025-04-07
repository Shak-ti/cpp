/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:35:35 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:35:36 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "adress of string : " << &string << std::endl;
	std::cout << "adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "adress held by stringREF : " << &stringREF << std::endl;
	std::cout << "value of string : " << string << std::endl;
	std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF : " << stringREF << std::endl;
	return 0;
}
