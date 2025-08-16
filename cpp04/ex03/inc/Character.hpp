/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:55:09 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 21:20:13 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : virtual public ICharacter {

	private:

		std::string 	_name;
		AMateria		*_inventory[4];
		unsigned int	_inventorySize = 4;

	public:

		Character( void );
		Character( const Character& );
		Character( const std::string& );
		virtual ~Character( void ) {}
		Character& operator=( const Character& );
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
};

#endif
