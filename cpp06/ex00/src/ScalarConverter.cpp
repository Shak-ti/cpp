/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:32:28 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/09 17:25:56 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter& const ) {
	std::cout << "Copy constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter( void ) {
	std::cout << "Destructor called" << std::endl;
}

ScalarConverter&	ScalarConverter::operator=( ScalarConverter& const ) {
	std::cout << "Operator = called" << std::endl;	
}

void	handleChar( std::string const input ) {
	int		i;
	char	c;
	float	f;
	double	d;	
}

void	handleInt( std::string const input ) {
	int		i;
	char	c;
	float	f;
	double	d;
}

void	handleFloat( std::string const input ) {
	int		i;
	char	c;
	float	f;
	double	d;	
}

void	handleDouble( std::string const input ) {
	int		i;
	char	c;
	float	f;
	double	d;	
}

void	handleLiterals( std::string const input ) {
	
}

void	handleErrors( std::string const input ) {
	std::cout << "char: impossible" << std::endl
		<< "int : impossible" << std::endl
		<< "float : impossible" << std::endl
		<< "double : impossible" << std::endl;	
}

void	ScalarConverter::convert( std::string const input ) {
	void (*fonctions[6]) (std::string const) = {
			&handleChar,
			&handleInt,
			&handleFloat,
			&handleDouble,
			&handleLiterals,
			&handleErrors
	};
	
	int	res = 0;
	
}
