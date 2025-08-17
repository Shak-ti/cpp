/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:13:42 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 19:31:03 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class cure : virtual public AMateria {

	public:

		cure( void );
		cure( const cure& );
		~cure( void );
		cure &operator=( const cure& );
	
		cure* 	clone() const;
		void 	use(ICharacter& target);
};

#endif
