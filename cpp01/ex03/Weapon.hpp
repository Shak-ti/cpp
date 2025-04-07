/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:36:18 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:38:14 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public :
		Weapon( std::string name );
		~Weapon( void );

		std::string const	&getType( void );
		void				setType( std::string name );
	private :
		std::string			type;
};

#endif
