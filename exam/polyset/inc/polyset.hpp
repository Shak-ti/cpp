#ifndef POLYSET_HPP
# define POLYSET_HPP
# include <iostream>
# include "subject.hpp"

class	searchableArrayBag : virtual public arrayBag, virtual public searchableBag {
	public:
		searchableArrayBag( void );
		searchableArrayBag( const searchableArrayBag& );
		virtual ~searchableArrayBag( void );
		searchableArrayBag&	operator=( const searchableArrayBag& );

		virtual bool	has( int ) const;
};

class	searchableTreeBag : virtual public treeBag, virtual public searchableBag {
	private:
		bool	searchNode(int value, treeBag::Node *node) const;

	public:
		searchableTreeBag( void );
		searchableTreeBag( const searchableTreeBag& );
		virtual ~searchableTreeBag( void );
		searchableTreeBag&	operator=( const searchableTreeBag& );

		virtual bool	has( int ) const;
};

class set {
	private:
		searchableBag	*_data;

	public:
		set( void );
		set( const set& );
		set( searchableBag* );
		~set( void );
		set&	operator=( const set& );

		void	insert( int );
		void	print( void ) const;
		void	clear( void );
		bool	has( int ) const;
};

#endif
