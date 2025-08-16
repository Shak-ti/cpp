/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:29:34 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 15:15:02 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : virtual public AAnimal {
	
	public :

		Dog ( void );
		Dog ( const Dog & );
		virtual ~Dog ( void );
		Dog &operator=( const Dog & );

		virtual void	makeSound( void ) const;
		std::string		getIdea( size_t ) const;
		void			setIdea( size_t, std::string );
	
	private :

		Brain	*_dogBrain;
};

#endif
