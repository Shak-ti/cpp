/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:32:28 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/11 19:10:58 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( ScalarConverter& const copy ) {
	static_cast<void>(copy); //explicitly marks copy as used in C++ style
}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter&	ScalarConverter::operator=( ScalarConverter& const copy ) {
	static_cast<void>(copy);
	return (*this);
}

void	printMessage( char c, int i, float f, double d ) {


	
}

void	convertChar( std::string* tab, char c ) {
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	printMessage(c, i, f, d);
}

void	convertInt( int i ) {
	char	c = static_cast<char>(i);
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);

	//vérifier si char displayable, else c = 0
	printMessage(c, i, f, d);
}

void	convertFloat( float f ) {
	int		i = static_cast<int>(f);
	char	c = static_cast<char>(f);
	double	d = static_cast<double>(f);	

	//vérifier si char displayable, else c = 0
	printMessage(c, i, f, d);
}

void	convertDouble( double d ) {
	int		i = static_cast<int>(d);
	char	c = static_cast<char>(d);
	float	f = static_cast<float>(d);

	//vérifier si char displayable, else c = 0
	printMessage(c, i, f, d);
}

void	ScalarConverter::convert( const std::string& input ) {
	char	*endptr = NULL; //to malloc ?
	double	nbr;
	
	nbr = strtod(input.c_str(), &endptr);
	if (errno == ERANGE) { 
		std::cout << strerror(errno) << std::endl;
		return ;
	} else if (endptr == NULL) {
			
	}
}
