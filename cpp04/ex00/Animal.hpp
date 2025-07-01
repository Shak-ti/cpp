/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:33:34 by sconiat           #+#    #+#             */
/*   Updated: 2025/07/01 12:37:52 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>

class	Animal {
	
	public :

		Animal( void );
		Animal( const Animal& );
		~Animal( void );
		Animal &operator=( const Animal& );

		void	makeSound( void );
		
	private :
	
		std::string	type;
};

#endif
