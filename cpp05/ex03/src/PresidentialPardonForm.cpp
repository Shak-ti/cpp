/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 11:50:23 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/05 17:31:42 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	AForm("PresidentialPardon", 25, 5, target) {
};

void	PresidentialPardonForm::action( void ) const {
	std::cout << this->getTarget() 
		<< " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
