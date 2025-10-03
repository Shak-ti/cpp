/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:00:23 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/03 15:31:50 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <stdexcept>
# include "./Bureaucrat.hpp"
# include "./AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : virtual public AForm
{
	public:
		RobotomyRequestForm( std::string );

		virtual void	action( void ) const;
};

#endif
