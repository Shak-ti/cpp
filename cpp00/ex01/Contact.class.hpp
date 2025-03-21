#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>
#include <cstring>

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

	private: //add "_"

		void	addInfos( std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret );

		//accesseurs
		void	setContact( void );
		int		getContact( void ) const;

		int		compareContact( Contact * to_compare ) const;
		//comparaison physique = comparer l'adresse
		//comparaison structurelle = comparer le contenu

		static int	_nbInst;
		//static = non membre
	};


#endif
