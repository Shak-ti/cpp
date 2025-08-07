/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:15:55 by marvin            #+#    #+#             */
/*   Updated: 2025/08/07 20:13:48 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap& toCopy );
		virtual ~FragTrap( void );
		FragTrap& operator=( const FragTrap& toCopy );

		void attack( const std::string& target );
		void highFivesGuys( void ) const;
	
	protected:

		static const unsigned int	defaultHitPoint = 100;
		static const unsigned int	defaultEnergyPoint = 100;
		static const unsigned int	defaultAttackDamage = 30;
};

#endif
