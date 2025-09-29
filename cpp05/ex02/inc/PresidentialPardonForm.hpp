/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 11:43:21 by sconiat           #+#    #+#             */
/*   Updated: 2025/09/29 21:37:58 by sconiat          ###   ########.fr       */
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
		PresidentialPardonForm( std::string );

		virtual void	execute( Bureaucrat const & ) const;
};

#endif
