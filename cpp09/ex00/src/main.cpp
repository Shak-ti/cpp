/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/21 18:05:06 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

void	printError( std::string msg )
{
	std::cout << msg << std::endl;
}

int	checkInput( int argc, char **argv, std::ifstream* file)
{
	if (argc != 2)
		return (printError("Error: no input file."), FAILURE);
	file->open(argv[1]);
	if (!file->is_open())
		return (printError("Error: could not open input file."), FAILURE);
	return (SUCCESS);
}

int	checkData( std::ifstream* file)
{
	file->open("data.csv");
	if (!file->is_open())
		return (printError("Error: could not open data.csv file."), FAILURE);
	return (SUCCESS);
}

int	main( int argc, char **argv ) {

	std::ifstream	dataStream;
	std::ifstream	inputStream;
	
	if (checkInput(argc, argv, &inputStream) == FAILURE)
		return (1);
	if (checkData(&dataStream) == FAILURE)
		return (1);
	//close correctement

	// try {
	BitcoinExchange	data(dataStream);
	// } catch (BitcoinExchange::BitcoinExchangeExcept& except) {
	// 	std::cout << except.what() << std::endl;
	// }
	
	//parse input : date dans l'ordre chronologique (getline)
	return (0);
}
