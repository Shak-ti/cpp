/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:29:27 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 19:51:01 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template  <typename T>
void	iter( T* array, size_t length, void(*f)(T t)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif
