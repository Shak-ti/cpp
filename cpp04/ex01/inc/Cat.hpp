/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:01:54 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 15:16:59 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {
	
	public :

		Cat ( void );
		Cat ( const Cat & );
		virtual ~Cat ( void );
		Cat &operator=( const Cat & );

		virtual void	makeSound( void ) const;
		std::string		getIdea( size_t ) const;
		void			setIdea( size_t, std::string );
	
	private :

		Brain	*_catBrain;
};

#endif
