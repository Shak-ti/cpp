/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:21:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/05 14:11:23 by sconiat          ###   ########.fr       */
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
		unsigned int					_N;
		std::vector<int>				_data;
		unsigned int					_size;
		std::vector<int>::iterator		_it;
		
	public:
		Span( void );
		Span( unsigned int& );
		Span( Span& );
		~Span( void );

		Span& 				operator=( Span& );
		
		void				addNumber( const int& );
		void				addNumbers( const std::vector<int> );
		unsigned int		shortestSpan( void ) const;
		unsigned int		longestSpan( void ) const;

		unsigned int		getN( void ) const;
		void				setN( unsigned int );
		unsigned int		getSize( void ) const;
		void				incrementSize( void );
		void				print( void ) const;
		
		class NoSpanException : public std::exception {
			public:
				const char* what() const throw();
		};

		class SpanFullException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
