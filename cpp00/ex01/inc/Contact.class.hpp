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
		
		void		print( void ) const;
		void		printSimple( int index ) const;
		void		addInfos( std::string *infos );

	private :

		std::string	_truncate( std::string str ) const;
};

#endif
