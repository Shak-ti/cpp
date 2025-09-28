/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 11:43:21 by sconiat           #+#    #+#             */
/*   Updated: 2025/09/28 12:10:22 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <stdexcept>
# include "./Bureaucrat.hpp"
# include "./AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : virtual public AForm
{
	public:
		PresidentialPardonForm( void ) ;
		PresidentialPardonForm( std::string );
		PresidentialPardonForm( const PresidentialPardonForm& ) ;
		virtual ~PresidentialPardonForm( void ) ;
		PresidentialPardonForm& operator=( const PresidentialPardonForm& ) ;

		void		beSigned( const Bureaucrat & );
};

std::ostream& operator<<( std::ostream&, const PresidentialPardonForm& );

#endif
