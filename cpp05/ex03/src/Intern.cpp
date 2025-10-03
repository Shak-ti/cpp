/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:48:09 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/03 17:06:25 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern created" << std::endl;
}

Intern::Intern( const Intern & toCopy) {
	(void)toCopy;
	std::cout << "Intern created by copy" << std::endl;
}

Intern::~Intern( void ) {
	std::cout << "Intern destroyed" << std::endl;
}

Intern& Intern::operator=( const Intern& toCopy ) {
	(void)toCopy;
	std::cout << "Intern copy operator called." << std::endl;
	return (*this);
}

AForm*	Intern::makePresidentialPardon( std::string target ) const {
	AForm* Form = new PresidentialPardonForm(target);
	std::cout << "Intern created " << Form->getName() << std::endl;
	return (Form);	
}

AForm*	Intern::makeRobotomyRequest( std::string target ) const {
	AForm* Form = new RobotomyRequestForm(target);
	std::cout << "Intern created " << Form->getName() << std::endl;
	return (Form);	
}

AForm*	Intern::makeShrubberyCreation( std::string target ) const {
	AForm* Form = new ShrubberyCreationForm(target);
	std::cout << "Intern created " << Form->getName() << std::endl;
	return (Form);	
}

AForm*	Intern::makeForm( std::string name, std::string target) const {
	std::string	names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm*	(Intern::*fonctions[3]) (std::string) const = {
		&Intern::makePresidentialPardon,
		&Intern::makeRobotomyRequest,
		&Intern::makeShrubberyCreation
	};
	
	for (size_t i = 0; i < 3; i++)
	{		
		if (!name.compare(names[i])) {
			return ((this->*fonctions[i])(target));
		}
	}
	throw NameDoesNotExist();
}

const char* Intern::NameDoesNotExist::what( void ) const throw() {
	return "Bureaucrat : Grade is too high!";
}
