/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:36:04 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 12:36:05 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	public :
		HumanA( std::string name, Weapon& Weapon );
		~HumanA( void );

		void	attack( void );
	private :
		std::string	name;
		Weapon&		weapon;
};

#endif
