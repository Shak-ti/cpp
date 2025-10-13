/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:29:09 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/13 15:41:37 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP
# include <iostream>
# include <cstdlib>
# include <typeinfo>

class Base
{
	public:
		virtual ~Base( void );
};

class A : public virtual Base {};

class B : public virtual Base {};

class C : public virtual Base {};

Base*	generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif
