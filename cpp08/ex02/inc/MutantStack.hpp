/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:21:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/11/17 20:47:42 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <stack>

template <typename T> class MutantStack {
	private:
		std::stack<T>	_data;
		
	public:
		MutantStack( void );
		MutantStack( MutantStack<T>& );
		~MutantStack( void );

		MutantStack<T>&	operator=( MutantStack<T>& );
		
		// void			print( void ) const;
		
		//Member functions :
		bool			empty( void ) const;
		unsigned int	size( void ) const;
		T&				top( void );
		void			push( const T& );
		void			emplace( T& );
		void			pop( void );
		void			swap( std::stack<T>& ); //non member ?

		// class NoMutantStackException : public std::exception {
		// 	public:
		// 		const char* what() const throw();
		// };

		// class MutantStackFullException : public std::exception {
		// 	public:
		// 		const char* what() const throw();
		// };
};

# include "./MutantStack.tpp"
#endif
