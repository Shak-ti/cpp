/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:25:21 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 14:37:09 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

# define B_TOGGLE 1

class Brain {
	
	public :

		Brain( void );
		Brain( std::string );
		Brain( const Brain& );
		~Brain( void );
		Brain &operator=( const Brain& );

		std::string	getIdea( size_t ) const;
		void		setIdea( size_t, std::string );
		void		printIdeas( void ) const;
		
	private :
	
		std::string	ideas[100];
};

#endif
