/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:35:18 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:35:19 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

	public:

		Zombie( void );
		~Zombie( void );

		void	announce( void );
		void	init_name( std::string name ) ;
		
	private:

		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
