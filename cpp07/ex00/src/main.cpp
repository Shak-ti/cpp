/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:30:38 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 19:04:41 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/whatever.hpp"

int	main( void ) {
	int			i1 = 3, i2 = 5;
	double		d1 = 3.14, d2 = 5.34;
	float		f1 = 3.14f, f2 = 5.34f;
	std::string	s1 = "UN", s2 = "DEUX";
	Whatever	W1(3, "un");
	Whatever	W2(5, "deux");

	std::cout << std::endl << "TESTING FOR INTS:" << std::endl;
	std::cout << "first value: " << i1 << " and second value: " << i2 << std::endl;
	std::cout << "max is " << max<int>(i1, i2) << " and min is " << min<int>(i1, i2) << std::endl;
	swap<int>(&i1, &i2);
	// le <int> spécifie qu'on veut utiliser swap avec un entier
	std::cout << "first value: " << i1 << " and second value: " << i2 << std::endl;

	std::cout << std::endl << "TESTING FOR DOUBLES:" << std::endl;
	std::cout << "first value: " << d1 << " and second value: " << d2 << std::endl;
	std::cout << "max is " << max<double>(d1, d2) << " and min is " << min<double>(d1, d2) << std::endl;
	swap<double>(&d1, &d2);
	std::cout << "first value: " << d1 << " and second value: " << d2 << std::endl;

	std::cout << std::endl << "TESTING FOR FLOATS:" << std::endl;
	std::cout << "first value: " << f1 << " and second value: " << f2 << std::endl;
	std::cout << "max is " << max<float>(f1, f2) << " and min is " << min<float>(f1, f2) << std::endl;
	swap<float>(&f1, &f2);
	std::cout << "first value: " << f1 << " and second value: " << f2 << std::endl;

	std::cout << std::endl << "TESTING FOR STRINGS:" << std::endl;
	std::cout << "first value: " << s1 << " and second value: " << s2 << std::endl;
	std::cout << "max is " << ::max(s1, s2) << " and min is " << ::min(s1, s2) << std::endl;
	// ::max pour dire de regarder le global namespace de max, pas le std
	swap<std::string>(&s1, &s2);
	std::cout << "first value: " << s1 << " and second value: " << s2 << std::endl;
	
	std::cout << std::endl << "TESTING FOR CLASSES:" << std::endl;
	std::cout << "first value: " << W1 << " and second value: " << W2 << std::endl;
	std::cout << "max is " << max<Whatever>(W1, W2) << " and min is " << min<Whatever>(W1, W2) << std::endl;
	swap<Whatever>(&W1, &W2);
	std::cout << "first value: " << W1 << " and second value: " << W2 << std::endl;

	return (0);
}
