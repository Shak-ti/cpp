/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:23:16 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/03 11:50:54 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::const_iterator easyfind(const T& haystack, int needle) {
	typename T::const_iterator it;

	it = std::find(haystack.begin(), haystack.end(), needle);

	if (it == haystack.end()) {
		throw NotFoundException();
	}
	return (it);
}
