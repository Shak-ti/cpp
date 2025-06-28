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
		ClapTrap( const ClapTrap& );
		~ClapTrap( void );
		ClapTrap &operator=( const ClapTrap& );
		
		void	attack( const std::string& target ) ;
		void	takeDamage( unsigned int amount ) ;
		void	beRepaired( unsigned int amount ) ;
				
	private:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
