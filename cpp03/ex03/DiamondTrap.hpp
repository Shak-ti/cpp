/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:21:06 by marvin            #+#    #+#             */
/*   Updated: 2025/08/07 20:11:32 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "./FragTrap.hpp"
# include "./ScavTrap.hpp"

class DiamondTrap : public virtual FragTrap, public virtual ScavTrap {
	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& toCopy );
		virtual ~DiamondTrap( void );
		DiamondTrap& operator=( const DiamondTrap& toCopy );

		void	attack( const std::string& target );
		void	whoAmI( void );

	private:
		
		std::string	_name;
};

#endif
