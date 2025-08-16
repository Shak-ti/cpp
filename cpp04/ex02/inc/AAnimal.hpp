/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:33:34 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 15:10:07 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class	AAnimal {
	
	public :

		AAnimal( void );
		AAnimal( const AAnimal& );
		AAnimal( const std::string );
		virtual ~AAnimal( void );
		AAnimal &operator=( const AAnimal& );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;
		void			setType( const std::string );
		
	protected :
	
		std::string	type;
};

#endif
