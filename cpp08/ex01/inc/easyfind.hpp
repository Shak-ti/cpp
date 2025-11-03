/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:21:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/03 11:22:35 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <stdexcept>
# include <algorithm>

template <typename T>
void	easyfind( const T& haystack, int needle );

# include "./easyfind.tpp"
#endif
