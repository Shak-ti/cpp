#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include "header.hpp"

class Contact {

	public:

		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

		Contact( void );
		~Contact( void );
		
		static int	getNbInst( void );
		void		print( void ) const;
		void		addInfos( std::string *infos );

	private: //add "_"

		int			compareContact( Contact * to_compare ) const;
		//comparaison physique = comparer l'adresse
		//comparaison structurelle = comparer le contenu

		static int	_nbInst;
		//static = non membre
	};


#endif
