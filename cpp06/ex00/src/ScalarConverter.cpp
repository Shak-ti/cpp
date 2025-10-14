/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:32:28 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/14 14:02:10 by sconiat          ###   ########.fr       */
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

void	printMessage( std::string charMsg, int i, float f, double d ) {

	std::cout << "char : " << charMsg << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << std::fixed << std::setprecision(6) << "float : " << f << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(6) << "double : " << d << std::endl;	
}

void	convertChar( char c ) {
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	printMessage(&c, i, f, d);
}

void	convertInt( int i ) {
	char		c = static_cast<char>(i);
	float		f = static_cast<float>(i);
	double		d = static_cast<double>(i);
	std::string	charMsg;
	
	if (i < CHAR_MIN || i > CHAR_MAX) {
		charMsg = "IMPOSSIBLE";
	} else if (!isprint(c)) {
		charMsg = "Non displayable";
	} else {
		charMsg = c;
	}
	printMessage(charMsg, i, f, d);
}

void	convertFloat( float f ) {
	int			i = static_cast<int>(f);
	char		c = static_cast<char>(f);
	double		d = static_cast<double>(f);	
	std::string	charMsg;
	
	if (i > CHAR_MAX || i < CHAR_MIN) {
		charMsg = "IMPOSSIBLE";
	} else if (!isprint(c)) {
		charMsg = "Non displayable";
	} else {
		charMsg = c;
	}
	printMessage(charMsg, i, f, d);
}

void	convertDouble( double d ) {
	int			i = static_cast<int>(d);
	char		c = static_cast<char>(d);
	float		f = static_cast<float>(d);
	std::string	charMsg;
	
	if (i > CHAR_MAX || i < CHAR_MIN) {
		charMsg = "IMPOSSIBLE";
	} else if (!isprint(c)) {
		charMsg = "Non displayable";
	} else {
		charMsg = c;
	}
	printMessage(charMsg, i, f, d);
}

void	ScalarConverter::convert( const std::string& input ) {
	char	*endptr = NULL;
	double	nbr;
	
	if (input == "+inff") return (convert("+inf"));
	if (input == "-inff") return (convert("-inf"));
	if (input == "nanf") return (convert("nan"));
	nbr = strtod(input.c_str(), &endptr);
	if (errno == ERANGE) {
		std::cout << strerror(errno) << std::endl;
		return ;
	} else if (*endptr == '\0') {
		if (nbr < INT_MAX && nbr > INT_MIN && input.find('e') == std::string::npos
			&& input.find('E') == std::string::npos && input.find('.') == std::string::npos) {
				convertInt(atoi(input.c_str()));
		} else {
			convertDouble(nbr);
		}
	} else if (*endptr == 'f' && *(endptr + 1) == '\0'
		&& input.length() > 1 && nbr > -FLT_MAX && nbr < FLT_MAX) {
		convertFloat(strtof(input.c_str(), NULL));
	} else if (input.length() == 1 && isprint(input[0])) {
		convertChar(input[0]);
	} else {
		std::cout << "Usage : ./convert \"char or int or float or double\"" << std::endl;
	}
}
