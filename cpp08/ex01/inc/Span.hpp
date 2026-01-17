/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:21:56 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/17 19:58:50 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <vector>

class Span {
	private:
		unsigned int					_N; //maximum integers stored
		std::vector<int>				_data;
		unsigned int					_size;
		std::vector<int>::iterator		_it;
		
	public:
		Span( void );
		Span( unsigned int& );
		Span( const Span& );
		~Span( void );

		Span& 				operator=( Span& );
		
		void				addNumber( const int& );
		void				addNumber( const std::vector<int> );
		unsigned int		shortestSpan( void ) const;
		unsigned int		longestSpan( void ) const;

		unsigned int		getN( void ) const;
		void				setN( unsigned int );
		unsigned int		getSize( void ) const;
		void				incrementSize( unsigned int );
		int					getData( unsigned int ) const;
		void				setData( int, unsigned int );
		
		class NoSpanException : public std::exception {
			public:
				const char* what() const throw();
		};

		class SpanFullException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream&	operator<<( std::ostream& os, const Span& toPrint );

#endif
