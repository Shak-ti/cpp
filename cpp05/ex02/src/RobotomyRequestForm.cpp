/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:01:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/09/29 23:13:47 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	AForm("RobotomyRequest", 72, 45, target) {
};

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	if ( this->getTarget().empty() ) {
		std::cout << "No target" << std::endl;
	} else if ( this->getIsSigned() == false ) {
		std::cout << "Can't execute form " << this->getName()
			<< " because it is not signed." << std::endl;
	} else if ( executor.getGrade() > this->getGradeToExecute() ) {
		std::cout << "Can't execute form " << this->getName()
			<< " because grade of executor too low." << std::endl;
	} else {
		std::cout << "DRRRRILLLLLLLL" << std::endl;		
		if (rand() % 2) {
			std::cout << this->getTarget() << " has been robotomized successfully :D" << std::endl;
		} else {
		std::cout << this->getTarget() << " robotomy failed :(" << std::endl;
		}
	}
}
