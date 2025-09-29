/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 11:50:23 by sconiat           #+#    #+#             */
/*   Updated: 2025/09/29 23:13:42 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	AForm("PresidentialPardon", 25, 5, target) {
};

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	if ( this->getTarget().empty() ) {
		std::cout << "No target" << std::endl;
	} else if ( this->getIsSigned() == false ) {
		std::cout << "Can't execute form " << this->getName()
			<< " because it is not signed." << std::endl;
	} else if ( executor.getGrade() > this->getGradeToExecute() ) {
		std::cout << "Can't execute form " << this->getName()
			<< " because grade of executor too low." << std::endl;
	} else {
		std::cout << this->getTarget() 
			<< " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
