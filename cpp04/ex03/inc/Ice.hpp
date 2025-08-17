/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:13:30 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 19:45:45 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class ice : virtual public AMateria {

	public:

		ice( void );
		ice( const ice& );
		~ice( void );
		ice &operator=( const ice& );
	
		ice* 	clone() const;
		void 	use(ICharacter& target);
};

#endif
