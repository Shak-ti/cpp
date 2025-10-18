/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:29:27 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/18 16:03:25 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template  <typename T>
void	iter( T* array, size_t length, void(*f)(T& t)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

//Surcharge pour aussi prendre les const
template  <typename T>
void	iter( T* array, size_t length, void(*f)(const T& t)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	print(const T& i) {
	std::cout << i << std::endl;
}

#endif
