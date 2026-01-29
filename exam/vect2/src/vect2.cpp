#include "../inc/vect2.hpp"

vect2::vect2( void ) : _x(0), _y(0) {}

vect2::vect2( const vect2& toCopy ) : _x(toCopy.getx()), _y(toCopy.gety()) {}

vect2::vect2( int xValue, int yValue ) : _x(xValue), _y(yValue) {}

vect2::~vect2( void ) {}

vect2&	vect2::operator=( const vect2& toCopy )
{
	if (this != &toCopy) //et pas l'inverse
	{
		this->setx(toCopy.getx());
		this->sety(toCopy.gety());
	}
	return (*this);
}

int		vect2::operator==( const vect2& rhs ) const
{
	if (this->getx() == rhs.getx() && this->gety() == rhs.gety())
		return (true);
	return (false);
}

int		vect2::operator!=( const vect2& rhs ) const
{
	if (this->getx() == rhs.getx() && this->gety() == rhs.gety())
		return (false);
	return (true);
}

vect2&	vect2::operator+=( const vect2& rhs )
{
	this->setx(this->getx() + rhs.getx());
	this->sety(this->gety() + rhs.gety());
	return (*this); //car on modifie la même instance
}

vect2&	vect2::operator-=( const vect2& rhs )
{
	this->setx(this->getx() - rhs.getx());
	this->sety(this->gety() - rhs.gety());
	return (*this); //car on modifie la même instance
}

vect2&	vect2::operator*=( int rhs )
{
	this->setx(this->getx() * rhs);
	this->sety(this->gety() * rhs);
	return (*this); //car on modifie la même instance
}

vect2	vect2::operator+( const vect2& rhs )
{
	vect2	res;

	res.setx(this->getx() + rhs.getx());
	res.sety(this->gety() + rhs.gety());
	return (res);
}

vect2	vect2::operator-( const vect2& rhs )
{
	vect2	res;

	res.setx(this->getx() - rhs.getx());
	res.sety(this->gety() - rhs.gety());
	return (res);
}

vect2	vect2::operator*( int rhs )
{
	vect2	res;

	res.setx(this->getx() * rhs);
	res.sety(this->gety() * rhs);
	return (res);
}

vect2	vect2::operator++( void ) //suffixe
{
	this->setx(this->getx() + 1);
	this->sety(this->gety() + 1);
	return (*this);
}

vect2	vect2::operator--( void ) //suffixe
{
	this->setx(this->getx() - 1);
	this->sety(this->gety() - 1);
	return (*this);
}

vect2	vect2::operator++( int ) //préfixe
{
	vect2	copy(*this);

	this->setx(this->getx() + 1);
	this->sety(this->gety() + 1);
	return (copy);
}

vect2	vect2::operator--( int ) //préfixe
{
	vect2	copy(*this);

	this->setx(this->getx() - 1);
	this->sety(this->gety() - 1);
	return (copy);
}

int	vect2::operator[]( unsigned int index ) const
{
	if (index == 0)
		return (this->getx());
	else
		return (this->gety());
}

int&	vect2::operator[]( unsigned int index )
{
	if (index == 0)
		return (this->_x);
	else
		return (this->_y);
}

int		vect2::getx( void ) const
{
	return (this->_x);
}

void	vect2::setx( int value )
{
	this->_x = value;
}

int		vect2::gety( void ) const
{
	return (this->_y);
}

void	vect2::sety( int value )
{
	this->_y = value;
}

vect2	operator*( const vect2& v, int i)
{
	vect2	res;

	res.setx(v.getx() * i);
	res.sety(v.gety() * i);
	return (res);
}

std::ostream&	operator<<( std::ostream& os, const vect2& toPrint )
{
	os << "{" << toPrint.getx() << ", " << toPrint.gety() << "}";
	return (os);
}

