/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:21:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/03 15:13:31 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <stdexcept>
# include <algorithm>

template <typename T>
typename T::const_iterator	easyfind( const T& haystack, int needle );

class NotFoundException : public std::exception {
	public:
		const char* what() const throw();
};


# include "./easyfind.tpp"
#endif
