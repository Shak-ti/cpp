#include "../inc/polyset.hpp"

searchableArrayBag::searchableArrayBag( void ) : arrayBag() {}

searchableArrayBag::searchableArrayBag( const searchableArrayBag& toCopy ) : arrayBag(toCopy) {}

searchableArrayBag::~searchableArrayBag( void ) {}

searchableArrayBag&	searchableArrayBag::operator=( const searchableArrayBag& toCopy ) {
	if (this != &toCopy)
		arrayBag::operator=(toCopy);
	return (*this);
}

bool	searchableArrayBag::has( int value ) const {
	for (unsigned int i = 0; i < this->_size; i++)
	{
		if (this->_data[i] == value)
			return (true);
	}
	return (false);
}

searchableTreeBag::searchableTreeBag( void ) : treeBag() {}

searchableTreeBag::searchableTreeBag( const searchableTreeBag& toCopy ) : treeBag(toCopy) {}

searchableTreeBag::~searchableTreeBag( void ) {}

searchableTreeBag&	searchableTreeBag::operator=( const searchableTreeBag& toCopy ) {
	if (this != &toCopy)
		treeBag::operator=(toCopy);
	return (*this);
}

bool	searchableTreeBag::searchNode(int value, treeBag::Node *node) const
{
	if (!node)
		return (false);
	else if (node->value == value)
		return (true);
	else if (searchNode(value, node->left))
		return (true);
	else if (searchNode(value, node->right))
		return (true);
	return (false);
}

bool	searchableTreeBag::has( int value ) const {
	return (searchNode(value, this->_root));
}

set::set( void ) : _data(NULL) {}

set::set( const set& toCopy ) : _data(toCopy._data) {}

set::set( searchableBag *bag ) : _data(bag) {}

set::~set( void ) {
	this->_data->clear();
}

set&	set::operator=( const set& toCopy )
{
	if (this != &toCopy)
		this->_data = toCopy._data;
	return (*this);
}

void	set::insert( int value )
{
	if (!this->_data->has(value))
		this->_data->insert(value);
}

void	set::print( void ) const
{
	this->_data->print();
}

void	set::clear( void )
{
	this->_data->clear();
}

bool	set::has( int value ) const
{
	return (this->_data->has(value));
}

