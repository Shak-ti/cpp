/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:29:27 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/14 16:05:05 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template  <typename T>
T const &	max( T const & x, T const & y ) {
	return (x > y ? x : y);
}

template  <typename T>
T const &	min(T const & x, T const & y) {
	return (x < y ? x : y);
}

template <typename T>
void	swap(T* x, T* y) {
	T	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

class Whatever {
	private:
		int			_number;
		std::string	_name;
		
	public:
		Whatever( void );
		Whatever( int, std::string );
		Whatever( const Whatever& );
		~Whatever();
		Whatever&	operator=( Whatever const & );
		bool		operator<( Whatever const & )const ;
		bool		operator>( Whatever const & )const ;

		int			getNumber( void )const ;
		std::string	getName( void )const ;
		void		setNumber( int );
		void		setName( std::string );
};

std::ostream&	operator<<( std::ostream& os, const Whatever& toPrint );

#endif
