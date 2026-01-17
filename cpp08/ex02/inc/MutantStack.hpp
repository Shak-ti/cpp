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
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
	
	public:
		MutantStack( void );
		MutantStack( const MutantStack<T>& );
		~MutantStack( void );
	
		MutantStack<T>&	operator=( MutantStack<T>& );
	
		typedef	typename std::stack<T>::container_type::iterator	iterator;
		
		iterator	begin() {
			return (this->c.begin());
		}

		iterator	end() {
			return (this->c.end());
		}

		iterator	rbegin() {
			return (this->c.rbegin());
		}

		iterator	rend() {
			return (this->c.rend());
		}
};



// const iterator ?
//virer fonction print + copy constructor const


# include "./MutantStack.tpp"
#endif
