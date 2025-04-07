/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:35:05 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:35:06 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

	public:

		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );

	private:

		std::string	_name;
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif
