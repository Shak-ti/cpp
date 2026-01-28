/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:40:00 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/28 12:56:32 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

bool	autorizedChar(char c)
{
	return (isdigit(c) || c == '+' || c == '-' || c == '*' || c == '/');
}

int	parseArgs(std::string args)
{
	int	numbers = 0;
	int	operators = 0;
	
	for (size_t i = 0; i < args.length(); i++)	
	{
		while (i < args.length() && args[i] == ' ')
			i++;
		if (!autorizedChar(args[i]))
		{
			std::cerr << "Error : not a number or an operator" << std::endl;
			return (FAILURE);
		}
		if (!isdigit(args[i]))
			operators++;
		else
			numbers++;
	}
	if (operators < 1 || numbers < 2)
	{
		std::cerr << "Error : not enough numbers or operator to perform RPN" << std::endl;
		return (FAILURE);
	}
	//NOT NECESSARY ?
	// if (operators * 2 < numbers)
	// {
	// 	std::cerr << "Error : not enough operators, unable to process" << std::endl;
	// 	return (FAILURE);
	// }
	// if (operators * 2 > numbers)
	// {
	// 	std::cerr << "Error : not enough numbers, unable to process" << std::endl;
	// 	return (FAILURE);
	// }
	return (SUCCESS);
}

long long	operation(long long &n1, long long &n2, char &op)
{
	if (op == '+')
	{
		std::cout << n1 << " " << op << " " << n2 << std::endl;
		std::cout << "Resuld : " << n1 + n2 << " pushed in operands" << std::endl;
		return (n1 + n2);
	} else if (op == '-') {
		std::cout << n1 << " " << op << " " << n2 << std::endl;
		std::cout << "Resuld : " << n1 - n2 << " pushed in operands" << std::endl;
		return (n1 - n2);
	} else if (op == '*') {
		std::cout << n1 << " " << op << " " << n2 << std::endl;
		std::cout << "Resuld : " << n1 * n2 << " pushed in operands" << std::endl;
		return (n1 * n2);
	} else {
		std::cout << n1 << " " << op << " " << n2 << std::endl;
		std::cout << "Resuld : " << n1 / n2 << " pushed in operands" << std::endl;
		return (n1 / n2);
	}
}

void	printOperands(std::stack<long long> operands)
{
	std::cout << "Operands: ";
	while (!operands.empty())
	{
		std::cout << operands.top() << " ";
		operands.pop();
	}
	std::cout << std::endl;
}

int	processOperation(std::string args)
{
	std::stack<long long>	operands;
	long long				temp;

	for (size_t i = 0; i < args.length(); i++)
	{
		while (i < args.length() && args[i] == ' ')
			i++;
		printOperands(operands);
		if (isdigit(args[i]))
		{
			std::cout << args[i] - '0' << " pushed in operands" << std::endl;
			operands.push(args[i] - '0');
		}
		else
		{
			std::cout << "Operator !" << std::endl;
			if (operands.size() < 2)
			{
				std::cerr << "Error : misplaced operator" << std::endl;
				return (FAILURE);
			}
			temp = operands.top();
			operands.pop();
			operands.push(operation(operands.top(), temp, args[i]));
		}
		printOperands(operands);
	}
	std::cout << operands.top() << std::endl;
	return (SUCCESS);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : invalid number of arguments" << std::endl;
		return (FAILURE);
	}
	if (parseArgs(argv[1]) == FAILURE)
		return (FAILURE);
	if (processOperation(argv[1]) == FAILURE)
		return (FAILURE);
	return (SUCCESS);
}

//$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// 42
// $> ./RPN "7 7 * 7 -"
// 42
// $> ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 0
// $> ./RPN "(1 + 1)"
// Error
// $>
