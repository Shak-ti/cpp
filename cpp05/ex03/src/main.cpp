/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/10/05 19:30:06 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"

int main() {
	std::cout << std::endl << "TESTS FORMS" << std::endl << std::endl;

	Intern	Bidule;

	{
		std::cout << std::endl << "	CREATING UNKNOWN FORM WITH INTERN" << std::endl << std::endl;

		try {
			Bidule.makeForm("unknown name", "target");
		}
		catch (Intern::NameDoesNotExistException& except) {
			std::cout << except.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "	CREATING FORMS WITH INTERN" << std::endl << std::endl;

		AForm*	Shrub = NULL;
		AForm*	Robot = NULL;
		AForm*	Prez = NULL;

		Shrub = Bidule.makeForm("shrubbery creation", "shrubTarget");
		Robot = Bidule.makeForm("robotomy request", "robotTarget");
		Prez = Bidule.makeForm("presidential pardon", "prezTarget");
		
		std::cout << std::endl << "	PRINTING FORMS" << std::endl << std::endl;
		
		std::cout << *Shrub << std::endl;
		std::cout << *Robot << std::endl;
		std::cout << *Prez << std::endl;
		
		std::cout << std::endl << "	CREATING BUREAUCRATS" << std::endl << std::endl;

		Bureaucrat	God("God",1);
		Bureaucrat	Flea("Flea",150);
		
		std::cout << std::endl << "	TRYING TO EXECUTE FORMS NOT SIGNED" << std::endl << std::endl;
		{
			God.executeForm(*Shrub);
			God.executeForm(*Robot);
			God.executeForm(*Prez);
		}

		std::cout << std::endl << "	TRYING TO SIGN WITH LOW PERMISSIONS" << std::endl << std::endl;
		{
			Flea.signForm(*Shrub);
			Flea.signForm(*Robot);
			Flea.signForm(*Prez);
		}
		
		std::cout << std::endl << "	SIGNING FORMS" << std::endl << std::endl;
		God.signForm(*Shrub);
		God.signForm(*Robot);
		God.signForm(*Prez);
		
		std::cout << std::endl << "	TRYING TO EXECUTE WITH LOW PERMISSIONS" << std::endl << std::endl;
		{
			Flea.executeForm(*Shrub);
			Flea.executeForm(*Robot);
			Flea.executeForm(*Prez);
		}
		
		std::cout << std::endl << "	TRYING TO EXECUTE WITH EMPTY TARGET" << std::endl << std::endl;
		{
			ShrubberyCreationForm	TestNoTarget("");
			God.signForm(TestNoTarget);
			God.executeForm(TestNoTarget);
		}
		
		std::cout << std::endl << "	EXECUTING FORMS" << std::endl << std::endl;
		God.executeForm(*Shrub);
		God.executeForm(*Robot);
		God.executeForm(*Prez);
		
		std::cout << std::endl << "END" << std::endl << std::endl;

		delete	Shrub;
		delete	Prez;
		delete	Robot;
	}

	return (0);
}
