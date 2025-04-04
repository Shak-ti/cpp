#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public:

		Fixed( void );
		~Fixed( void );
		int		getRawBits( void ) const ;
		void	setRawBits( int const raw );

	private:
		int					_value;
		static const int	_frac;
};

#endif
