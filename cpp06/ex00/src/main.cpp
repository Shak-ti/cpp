/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 19:54:09 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/14 10:19:46 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int	main( int argc, char **argv ) {
	if ( argc != 2 ) {
		std::cout << "Usage : ./convert \"char or int or float or double\"" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
