/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:33:34 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 13:28:31 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal {
	
	public :

		Animal( void );
		Animal( const Animal& );
		Animal( const std::string );
		virtual ~Animal( void );
		Animal &operator=( const Animal& );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
		void			setType( const std::string );
		
	protected :
	
		std::string	type;
};

#endif
