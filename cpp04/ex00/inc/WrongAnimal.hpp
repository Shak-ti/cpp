/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:33:34 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 11:25:25 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class	WrongAnimal {
	
	public :

		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& );
		WrongAnimal( const std::string );
		virtual ~WrongAnimal( void );
		WrongAnimal &operator=( const WrongAnimal& );

		void		makeSound( void ) const;
		std::string	getType( void ) const;
		void		setType( const std::string );
		
	protected :
	
		std::string	type;
};

#endif
