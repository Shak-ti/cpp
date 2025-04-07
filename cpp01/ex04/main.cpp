/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:12:58 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 13:12:59 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	sed(std::string str, std::string toReplace, std::string replacement) {
	size_t		location = 0;

	location = str.find(toReplace, location);
	while (location != std::string::npos) {
		str.erase(location, toReplace.length());
		str.insert(location, replacement);
		location = str.find(toReplace);
	}
	return str;
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Usage : ./sed filename toReplace replacement\n";
		return 1;
	}
	std::ifstream	fileIn(av[1], std::ifstream::in);
	if (!fileIn) {
		std::cout << "Can't open file " << av[1] << std::endl;
		return 1;
	}

	std::string		copy;
	std::string		buf;
	while (!fileIn.eof()) {
		getline(fileIn, buf);
		copy.append(buf);
		copy.append("\n");
	}
	copy = sed(copy, av[2], av[3]);
	std::string	nameIn = av[1];
	nameIn.append(".replace");
	const char		*nameOut = nameIn.c_str();
	std::ofstream	fileOut(nameOut, std::ofstream::out);
	if (!fileOut) {
		std::cout << "Error creating file " << nameOut << std::endl;
	}
	fileOut << copy;
	fileIn.close();
	return 0;
}
