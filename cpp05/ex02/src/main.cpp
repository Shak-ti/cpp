/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/10/05 18:36:00 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main() {

	std::cout << "TESTS BUREAUCRATS" << std::endl << std::endl;
		
	{
		std::cout << "	TEST TOO LOW" << std::endl << std::endl;
		try {
			Bureaucrat	Flea("Flea", 151);
		}
		catch (Bureaucrat::GradeTooLowException& except) {
			std::cout << except.what() << std::endl;
		}
		
		std::cout << "	TEST TOO HIGH" << std::endl << std::endl;
		try {
			Bureaucrat	God("God", 0);
		}
		catch (Bureaucrat::GradeTooHighException& except) {
			std::cout << except.what() << std::endl;
		}
	}
	
	std::cout << std::endl << "TESTS FORMS" << std::endl << std::endl;

	{
		ShrubberyCreationForm	Shrub("shrubTarget");
		RobotomyRequestForm		Robot("robotTarget");
		PresidentialPardonForm	Prez("prezTarget");
		Bureaucrat				God("God",1);
		Bureaucrat				Flea("Flea",150);
				
		std::cout << Shrub << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Prez << std::endl;
	
		std::cout << std::endl << "	TRYING TO EXECUTE FORMS NOT SIGNED" << std::endl << std::endl;
		{
			God.executeForm(Shrub);
			God.executeForm(Robot);
			God.executeForm(Prez);
		}

		std::cout << std::endl << "	TRYING TO SIGN WITH LOW PERMISSIONS" << std::endl << std::endl;
		{
			Flea.signForm(Shrub);
			Flea.signForm(Robot);
			Flea.signForm(Prez);
		}
		
		std::cout << std::endl << "	SIGNING FORMS" << std::endl << std::endl;
		God.signForm(Shrub);
		God.signForm(Robot);
		God.signForm(Prez);
		
		std::cout << std::endl << "	TRYING TO EXECUTE WITH LOW PERMISSIONS" << std::endl << std::endl;
		{
			Flea.executeForm(Shrub);
			Flea.executeForm(Robot);
			Flea.executeForm(Prez);
		}
		
		std::cout << std::endl << "	TRYING TO EXECUTE WITH EMPTY TARGET" << std::endl << std::endl;
		{
			ShrubberyCreationForm	TestNoTarget("");
			God.signForm(TestNoTarget);
			God.executeForm(TestNoTarget);
		}
		
		std::cout << std::endl << "	EXECUTING FORMS" << std::endl << std::endl;
		God.executeForm(Shrub);
		God.executeForm(Robot);
		God.executeForm(Prez);

		std::cout << std::endl << "END" << std::endl << std::endl;
	}
	return (0);
}
