/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:03:53 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 19:58:32 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "Character.hpp"
# include "ICharacter.hpp"

class AMateria {
	
	protected:

		std::string	_type;

	public:
		
		AMateria( void );
		AMateria( AMateria& );
		AMateria( std::string const& type );
		virtual ~AMateria( void );
		AMateria &operator=( const AMateria& );
		
		std::string const&	getType() const;
		
		virtual AMateria*	clone() const = 0;
		virtual void		use( ICharacter& target );
};

#endif
