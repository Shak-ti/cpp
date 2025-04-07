/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:36:10 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:36:11 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	public :
		HumanB( std::string name );
		~HumanB( void );

		void	attack( void );
		void	setWeapon( Weapon& newWeapon );

	private :
		std::string	name;
		Weapon		*weapon;
};

#endif
