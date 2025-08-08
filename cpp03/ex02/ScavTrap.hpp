/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:09:10 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/07 20:20:43 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& toCopy );
		virtual ~ScavTrap( void );
		ScavTrap& operator=( const ScavTrap& toCopy );

		void attack( const std::string& target );
		void guardGate( void );
};

#endif
