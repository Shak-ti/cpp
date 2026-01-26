/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/26 13:20:23 by sconiat          ###   ########.fr       */
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
	
	std::string	line;
	std::getline(*file, line);
	if (line != "date | value")
		return (printError("Error: wrong formating of input file."), FAILURE);
	return (SUCCESS);
}

int	checkData( std::ifstream* file)
{
	file->open("testdata.csv");
	if (!file->is_open())
		return (printError("Error: could not open data.csv file."), FAILURE);
	
	std::string	line;
	std::getline(*file, line);
	if (line != "date,exchange_rate")
		return (printError("Error: wrong formating of data file."), FAILURE);
	return (SUCCESS);
}

std::string	trimLine( std::string line )
{
	std::string	res = "";
	
	for (size_t i = 0; i < line.size(); i++)
	{
		if (line[i] != ' ')
			res += line[i];
	}
	return (res);
}

int	leapYear(int y)
{
	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

int	testDate( int y, int m, int d )
{
	int m31_arr[] = {1, 3, 5, 7, 8, 10, 12};
	std::vector<int> m31(m31_arr, m31_arr + 7);
	int m30_arr[] = {4, 6, 9, 11};
	std::vector<int> m30(m30_arr, m30_arr + 4);
	if (y > 2026 || y < 0)
		return (printError("Error: invalid year."), FAILURE);
	if (m > 12 || m < 1)
		return (printError("Error: invalid month."), FAILURE);
	if (d < 1)
		return (printError("Error: invalid day (too low)."), FAILURE);
	if (std::find(m31.begin(), m31.end(), m) != m31.end() && (d > 31))
		return (printError("Error: invalid day (too high)."), FAILURE);
	if (std::find(m30.begin(), m30.end(), m) != m30.end() && (d > 30))
		return (printError("Error: invalid day (too high)."), FAILURE);
	if (m == 2 && !leapYear(y) && (d > 28))
		return (printError("Error: invalid day (too high february)."), FAILURE);
	if (m == 2 && leapYear(y) && (d > 29))
		return (printError("Error: invalid day (too high february leap year)."), FAILURE);
	return (SUCCESS);
}

int	parseData( std::map<std::string, int>& data, std::ifstream& file )
{
	(void) data;
	
	std::string	line;
	int day, month, year, exchangeRate;
	
	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
		line = trimLine(line);
		if (sscanf(line.c_str(), "%d-%d-%d,%d", &year, &month, &day, &exchangeRate) < 4)
			return (printError("Error: invalid data format."), FAILURE);
		// std::cout << year << "-" << month << "-"  << day << ", " << exchangeRate << std::endl;
		if (testDate(year, month, day) == FAILURE)
			return (FAILURE);
		if (exchangeRate < 0)
			return (printError("Error: invalid data format (negative exchange rate)."), FAILURE);
		data.insert(std::make_pair(line.substr(0, 10), exchangeRate));
	}
	return (SUCCESS);
}

int	main( int argc, char **argv ) {

	std::ifstream				dataStream;
	std::ifstream				inputStream;
	std::map<std::string, int>	data;
	
	if (checkInput(argc, argv, &inputStream) == FAILURE)
		return (1);
	if (checkData(&dataStream) == FAILURE)
		return (1);
	if (parseData(data, dataStream) == FAILURE)
		return (1);
	
	std::cout << "DATA :" << std::endl;
	for(std::map<std::string, int>::const_iterator it = data.begin(); it != data.end(); ++it)
		std::cout << it->first << ", " << it->second << std::endl;

		
	dataStream.close();
	inputStream.close();
	return (0);
}
