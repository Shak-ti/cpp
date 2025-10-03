/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:01:56 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/03 15:31:19 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	AForm("RobotomyRequest", 72, 45, target) {
};

void	RobotomyRequestForm::action( void ) const {
	std::cout << "DRRRRILLLLLLLL" << std::endl;		
	if (rand() % 2) {
		std::cout << this->getTarget() << " has been robotomized successfully :D" << std::endl;
	} else {
	std::cout << this->getTarget() << " robotomy failed :(" << std::endl;
	}
}
