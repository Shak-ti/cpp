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
		std::string	type;
};

#endif
