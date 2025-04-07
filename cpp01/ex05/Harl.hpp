/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:12:41 by sconiat           #+#    #+#             */
/*   Updated: 2025/04/07 13:12:42 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <map>

class	Harl {
	public : 
		Harl( void );
		~Harl( void );
		void	complain( std::string level );

	private :

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
