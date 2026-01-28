/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:40:00 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/28 16:52:11 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

void	printIntVector(std::vector<int> &v)
{
	for (std::vector<int>::size_type i = 0; i < v.size(); ++i)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

void	printPairVector(std::vector<std::pair<int, int> > &v)
{
	for (std::vector<std::pair<int, int> >::size_type i = 0; i < v.size(); ++i)
		std::cout << "[" << v[i].first << ", " << v[i].second << "] ";
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

void	makePairs(std::vector<int> &v, std::vector<std::pair<int, int> > &vPairs)
{
	std::pair<int, int>	temp;
	
	for (std::vector<int>::size_type i = 0; i < v.size() - 1; i+=2)
	{
		if (v[i] <= v[i + 1])
			temp = std::make_pair(v[i], v[i + 1]);
		else
			temp = std::make_pair(v[i + 1], v[i]);
		vPairs.push_back(temp);
	}
}

void	sortPairs(std::vector<std::pair<int, int> > &vPairs)
{
	std::vector<std::pair<int, int> >::iterator	it;
	std::vector<std::pair<int, int> >			res;
	
	printPairVector(vPairs);
	for (std::vector<std::pair<int, int> >::size_type i = 0; i < vPairs.size(); ++i)
	{
		it = lower_bound(res.begin(), res.end(), vPairs[i]);
		res.insert(it, vPairs[i]);
	}
	printPairVector(res);
}

int	sortVector(std::vector<int> &v)
{
	std::vector<std::pair<int, int> > vPairs;

	makePairs(v, vPairs);
	sortPairs(vPairs);

	// if (v.size() % 2 == 0)
	// {
	// 	std::iter_swap(v.begin() + position, v.begin() + position);
	// }
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
	std::cout << "Before : ";
	printIntVector(vectorInput);
	if (sortVector(vectorInput) == FAILURE)
		return (FAILURE);
	std::cout << "After : ";
	printIntVector(vectorInput);
	return (SUCCESS);
}

// shuf -i 1-1000 -n 3000 | tr "\n" " "
