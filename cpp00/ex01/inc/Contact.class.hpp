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
		static int	getNbInitializedInst( void );
		void	print( void ) const;
		void	addInfos( void );

	private: //add "_"

		//accesseurs
		void	setContact( void );
		int		getContact( void ) const;
		bool	testEmpty( void ) const;

		int		compareContact( Contact * to_compare ) const;
		//comparaison physique = comparer l'adresse
		//comparaison structurelle = comparer le contenu

		static int	_nbInst;
		static int	_nbInitializedInst;
		//static = non membre
	};


#endif
