/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:23:16 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/03 11:34:13 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void easyfind(const T& haystack, int needle) {
	typename T::const_iterator it;
	
	it = std::find(haystack.begin(), haystack.end(), needle);
	if (it != haystack.end()) {
		std::cout << "Found " << needle << " at index " << std::distance(haystack.begin(), it) << std::endl;
	} else {
		std::cout << needle << " not found" << std::endl;
	}
}
