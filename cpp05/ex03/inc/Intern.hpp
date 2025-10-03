/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:48:00 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/03 16:53:47 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNS_HPP
# define INTERNS_HPP
# include <iostream>
# include <stdexcept>
# include "./AForm.hpp"
# include "./PresidentialPardonForm.hpp"
# include "./RobotomyRequestForm.hpp"
# include "./ShrubberyCreationForm.hpp"

class AForm;

class Intern {
	public:
		Intern();
		Intern( const Intern& );
		~Intern();
		Intern& operator=( const Intern& );
		
		AForm*	makePresidentialPardon( std::string )const ;
		AForm*	makeRobotomyRequest( std::string )const ;
		AForm*	makeShrubberyCreation( std::string )const ;
		AForm*	makeForm( std::string, std::string ) const;

		class NameDoesNotExist : public std::exception {
			public:
				const char* what( void ) const throw();
   		};
};

#endif
