/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:01:16 by sconiat           #+#    #+#             */
/*   Updated: 2025/09/29 22:01:44 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <stdexcept>
# include "./Bureaucrat.hpp"
# include "./AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : virtual public AForm
{
	public:
		ShrubberyCreationForm( std::string );

		virtual void	execute( Bureaucrat const & ) const;
};

#endif
