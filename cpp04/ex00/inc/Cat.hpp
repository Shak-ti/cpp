/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:01:54 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 12:45:38 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class	Cat : virtual public Animal {
	
	public :

		Cat ( void );
		Cat ( const Cat & );
		virtual ~Cat ( void );
		Cat &operator=( const Cat & );

		virtual void	makeSound( void ) const;
};

#endif
