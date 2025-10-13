/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:22:50 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 13:50:18 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <stdint.h>
# include "./Data.hpp"

class Serializer {
	protected:
		Serializer( void );
		Serializer( const Serializer& );
		~Serializer( void );
		Serializer&	operator=( const Serializer& );

	public:
		static uintptr_t	serialize( Data* );
		static Data*		deserialize( uintptr_t );
};

#endif
