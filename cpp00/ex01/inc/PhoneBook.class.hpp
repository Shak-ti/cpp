#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "header.hpp"

class PhoneBook {

	public:

		PhoneBook( void );
		~PhoneBook( void );
		
		void		add( void );
		void		search( void ) const;
		
	private:
		
		static int	_nbContact;
		int			_getSpot( void );
		void		_getInfos( std::string *infos ) const;
		int			_getLastEntry( void );
		void		_printTab( void ) const;
		int			_getIndex( std::string ) const;
		Contact		_contactList[8];
};

#endif
