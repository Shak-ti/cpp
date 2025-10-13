/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:32:28 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 12:16:25 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( const ScalarConverter& copy ) {
	static_cast<void>(copy); //explicitly marks copy as used in C++ style
}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter&	ScalarConverter::operator=( const ScalarConverter& copy ) {
	static_cast<void>(copy);
	return (*this);
}

void	printMessage( char c, int i, float f, double d ) {

	if (!isprint(c)) {
		std::cout << "char : NON PRINTABLE" << std::endl;
	} else {
		std::cout << "char : " << c << std::endl;
	}
	std::cout << "int : " << i << std::endl;
	std::cout << std::fixed << std::setprecision(6) << "float : " << f << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(6) << "double : " << d << std::endl;	
}

void	convertChar( char c ) {
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	printMessage(c, i, f, d);
}

void	convertInt( int i ) {
	char	c = static_cast<char>(i);
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);

	if (!isprint(c)) {
		c = 0;
	}
	printMessage(c, i, f, d);
}

void	convertFloat( float f ) {
	int		i = static_cast<int>(f);
	char	c = static_cast<char>(f);
	double	d = static_cast<double>(f);	

	if (!isprint(c)) {
		c = 0;
	}
	printMessage(c, i, f, d);
}

void	convertDouble( double d ) {
	int		i = static_cast<int>(d);
	char	c = static_cast<char>(d);
	float	f = static_cast<float>(d);

	if (!isprint(c)) {
		c = 0;
	}
	printMessage(c, i, f, d);
}

void	ScalarConverter::convert( const std::string& input ) {
	char	*endptr = NULL; //to malloc ?
	double	nbr;
	
	nbr = strtod(input.c_str(), &endptr);
	if (errno == ERANGE) { 
		std::cout << strerror(errno) << std::endl;
		return ;
	} else if (*endptr == '\0') {
		if (nbr < INT_MAX && nbr > INT_MIN) {
			convertInt(static_cast<int>(nbr));
		} else {
			convertDouble(nbr);
		}
	} else if (*endptr == 'f' && *(endptr + 1) == '\0') {
		convertFloat(static_cast<int>(nbr));
	} else if (input.length() == 1 && isprint(input[0])) {
		convertChar(input[0]);
	} else {
		std::cout << "Usage : ./convert \"char/int/float/double\"" << std::endl;
	}
}
