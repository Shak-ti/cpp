/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:40:00 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/26 16:50:14 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

int	parseArgs(std::string args, std::stack<int> *data)
{
	return (SUCCESS);
}

void	processOperation(std::stack<int> data)
{
	
}

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error" << std::endl;
		return (1);
	}
	
	std::stack<int>	data;
	if (parseArgs(argv[1], &data) == FAILURE) {
		return (1);
	}
	processOperation(data);
	return (0);
}
