/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/26 16:34:10 by sconiat          ###   ########.fr       */
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
	file->open("data.csv");
	if (!file->is_open())
		return (printError("Error: could not open data.csv file."), FAILURE);
	
	std::string	line;
	std::getline(*file, line);
	if (line != "date,exchange_rate")
		return (printError("Error: wrong formating of data file."), FAILURE);
	return (SUCCESS);
}

std::string	trimLine( std::string& line )
{
	std::string	res = "";
	
	for (size_t i = 0; i < line.size(); i++)
	{
		if (line[i] != ' ')
			res += line[i];
	}
	return (res);
}

int	leapYear(const int& y)
{
	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

int	testDate( const int& y, const int& m, const int& d )
{
	if (y > 2026 || y < 0)
		return (printError("Error: invalid year."), FAILURE);
	if (m > 12 || m < 1)
		return (printError("Error: invalid month."), FAILURE);
	if (d < 1)
		return (printError("Error: invalid day (too low)."), FAILURE);
	if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d > 31))
		return (printError("Error: invalid day (too high)."), FAILURE);
	if ((m == 4 || m == 6 || m == 9 || m == 11) && (d > 30))
		return (printError("Error: invalid day (too high)."), FAILURE);
	if (m == 2 && !leapYear(y) && (d > 28))
		return (printError("Error: invalid day (too high february)."), FAILURE);
	if (m == 2 && leapYear(y) && (d > 29))
		return (printError("Error: invalid day (too high february leap year)."), FAILURE);
	return (SUCCESS);
}

int	parseData( std::map<std::string, float>& data, std::ifstream& file )
{
	std::string	line;
	int 		day, month, year;
	float		exchangeRate;
	
	while (std::getline(file, line))
	{
		line = trimLine(line);
		if (line == "")
			continue;
		if (sscanf(line.c_str(), "%d-%d-%d,%f", &year, &month, &day, &exchangeRate) < 4)
			return (printError("Error: invalid data format."), FAILURE);
		if (testDate(year, month, day) == FAILURE)
			return (FAILURE);
		if (exchangeRate < 0)
			return (printError("Error: invalid data format (negative exchange rate)."), FAILURE);
		data.insert(std::make_pair(line.substr(0, 10), exchangeRate));
	}
	if (data.empty())
		return (printError("Error: data is empty (no valid values)."), FAILURE);
	return (SUCCESS);
}

float	findClosest(std::string date, std::map<std::string, float>& data)
{
	float									tempValue;
	std::map<std::string, float>::iterator	it = data.begin();
	
	tempValue = it->second;
	while (it != data.end())
	{
		it++;
		if (it->first > date)
			return (tempValue);
		tempValue = it->second;
	}
	return (tempValue);
}

void	processInput(std::map<std::string, float> data, std::ifstream& file)
{
	std::string	line;
	int 		day, month, year;
	float		value;
	
	while (std::getline(file, line))
	{
		line = trimLine(line);
		if (line == "")
		{
			printError("Error: bad input.");
			continue;
		} else if (sscanf(line.c_str(), "%d-%d-%d|%f", &year, &month, &day, &value) < 4) {
			printError("Error: bad input => " + line.substr(0, 10));
			continue;
		// } else if () {
		// 	printError("Error: bad input.");
		// 	continue;
		} else if (testDate(year, month, day) == FAILURE)
			continue;
		if (value < 0)
		{
			printError("Error: not a positive number.");
			continue;
		} else if (value > 1000) {
			printError("Error: too large a number.");
			continue;
		} else {
			if (data.find(line.substr(0, 10)) != data.end())
				std::cout << line.substr(0, 10) << " => " << value << " = " << data[line.substr(0, 10)] * value << std::endl;
			else
				std::cout << line.substr(0, 10) << " => " << value << " = " << findClosest(line.substr(0, 10), data) * value << std::endl;
		}
	}
}

int	main( int argc, char **argv ) {

	std::ifstream					dataStream;
	std::ifstream					inputStream;
	std::map<std::string, float>	data;
	
	if (checkInput(argc, argv, &inputStream) == FAILURE)
		return (1);
	if (checkData(&dataStream) == FAILURE)
		return (1);
	if (parseData(data, dataStream) == FAILURE)
		return (1);
	processInput(data, inputStream);
	dataStream.close();
	inputStream.close();
	return (0);
}
