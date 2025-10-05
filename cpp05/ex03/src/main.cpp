/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/10/05 16:57:41 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"

int main() {
	std::cout << "CREATING INTERN" << std::endl << std::endl;

	Intern	Tom;

	AForm	*Prez = NULL;
	AForm	*Shrub = NULL;
	AForm	*Robot = NULL;
	AForm	*Wrong = NULL;
	
	try {
		std::cout << std::endl << "CREATING FORMS WITH INTERN" << std::endl << std::endl;
		
		Prez = Tom.makeForm("presidential pardon", "prezTarget");
		Shrub = Tom.makeForm("robotomy request", "robotTarget");
		Robot = Tom.makeForm("shrubbery creation", "shrubTarget");
		Wrong = Tom.makeForm("wrong name", "wrongTarget");
	}
	catch (Intern::NameDoesNotExistException& except) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "PRINTING FORMS" << std::endl << std::endl;		

	std::cout << *Shrub << std::endl;
	std::cout << *Robot << std::endl;
	std::cout << *Prez << std::endl;
	if (Wrong) std::cout << *Wrong << std::endl;
	
	std::cout << std::endl << "CREATING BUREAUCRAT" << std::endl << std::endl;

	Bureaucrat*	God = NULL;
	try {
		God = new Bureaucrat("God", 1);
	}
	catch (Bureaucrat::GradeTooHighException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& except) {
		std::cout << except.what() << std::endl;
	}
	std::cout << std::endl << "TRYING TO SIGN FORMS" << std::endl << std::endl;
	
	if (God) God->signForm(*Shrub);
	if (God) God->signForm(*Robot);
	if (God) God->signForm(*Prez);

	std::cout << std::endl << "TRYING TO EXECUTE FORMS" << std::endl << std::endl;
	
	if (God) Shrub->execute(*God);
	if (God) Robot->execute(*God);
	if (God) Prez->execute(*God);
	
	std::cout << std::endl << "END" << std::endl << std::endl;
	delete	Prez;
	delete	Shrub;
	delete	Robot;
	delete	Wrong;
	delete	God;
	return (0);
}
