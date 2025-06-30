/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:26:40 by sconiat           #+#    #+#             */
/*   Updated: 2025/06/28 12:46:20 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

	public:

		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& toCopy );
		~ClapTrap( void );
		ClapTrap &operator=( const ClapTrap& toCopy );
		
		void			attack( const std::string& target ) ;
		void			takeDamage( unsigned int amount ) ;
		void			beRepaired( unsigned int amount ) ;

		std::string		getName( void ) ;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;
		
	private:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
