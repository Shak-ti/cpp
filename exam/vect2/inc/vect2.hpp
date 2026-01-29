#ifndef VECT2_HPP
# define VECT2_HPP

# include <iostream>

class	vect2
{
	private:
		int	_x;
		int	_y;

	public:
		vect2( void );
		vect2( const vect2& );
		vect2( int, int );
		~vect2( void );

		vect2&	operator=( const vect2& );

		int		operator==( const vect2& ) const;
		int		operator!=( const vect2& ) const;

		vect2&	operator+=( const vect2& ); //pas oublier réference
		vect2&	operator-=( const vect2& );
		vect2&	operator*=( int );

		vect2	operator+( const vect2& );
		vect2	operator-( const vect2& );
		vect2	operator*( int );

		vect2	operator++( int ); //suffixe
		vect2	operator--( int ); //suffixe
		vect2	operator++( void ); //préfixe
		vect2	operator--( void ); //préfixe

		int		operator[]( unsigned int ) const;
		int&	operator[]( unsigned int );

		int		getx( void ) const;
		void	setx( int );
		int		gety( void ) const;
		void	sety( int );
};

vect2			operator*( const vect2& v, int i);
std::ostream&	operator<<( std::ostream& os, const vect2& toPrint );

#endif
