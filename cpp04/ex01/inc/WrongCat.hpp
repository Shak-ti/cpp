/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:01:54 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/10 11:04:47 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class	WrongCat : virtual public WrongAnimal {
	
	public :

		WrongCat ( void );
		WrongCat ( const WrongCat & );
		virtual ~WrongCat ( void );
		WrongCat &operator=( const WrongCat & );

		void	makeSound( void );
};

#endif
