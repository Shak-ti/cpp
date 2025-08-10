/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:29:34 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 12:45:45 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class	Dog : virtual public Animal {
	
	public :

		Dog ( void );
		Dog ( const Dog & );
		virtual ~Dog ( void );
		Dog &operator=( const Dog & );

		virtual void	makeSound( void ) const;
};

#endif
