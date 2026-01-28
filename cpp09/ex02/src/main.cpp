/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:40:00 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/28 15:28:22 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

void	printVector(std::vector<int> &v)
{
	for (std::vector<int>::size_type i = 0; i < v.size(); ++i)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

int	parseArgs(int argc, char **argv, std::vector<int> &vectorInput)
{
	int	temp;

	for (int i = 1; i < argc; i++)
	{
		if (sscanf(argv[i], "%d", &temp) != 1)
		{
			std::cerr << "Error : invalid input" << std::endl;
			return (FAILURE);
		}
		if (temp < 0)
		{
			std::cerr << "Error : negative number" << std::endl;
			return (FAILURE);
		}
		vectorInput.push_back(temp);
	}
	return (SUCCESS);
}

int	main(int argc, char **argv)
{
	std::vector<int>	vectorInput;
	
	if (argc == 1)
	{
		std::cerr << "Error : no number to sort" << std::endl;
		return (FAILURE);
	}

	if (parseArgs(argc, argv, vectorInput) == FAILURE)
		return (FAILURE);
	printVector(vectorInput);
	return (SUCCESS);
}
