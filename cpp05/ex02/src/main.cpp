/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/10/03 18:12:07 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main() {
	try {
		std::cout << "CREATING FORMS" << std::endl << std::endl;
		
		ShrubberyCreationForm	Shrub("shrubTarget");
		RobotomyRequestForm		Robot("robotTarget");
		PresidentialPardonForm	Prez("prezTarget");

		std::cout << Shrub << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Prez << std::endl;

		std::cout << std::endl << "CREATING BUREAUCRATS" << std::endl << std::endl;

		Bureaucrat	Paul("Paul", 42);
		Bureaucrat	God("God", 1);
		Bureaucrat	Flea("Flea", 150);

		std::cout << std::endl << "TRYING TO EXECUTE FORMS NOT SIGNED" << std::endl << std::endl;

		Paul.signForm(Shrub);
		Paul.signForm(Robot);
		Paul.signForm(Prez);		

		std::cout << std::endl << "TRYING TO SIGN FORMS" << std::endl << std::endl;
		
		std::cout << std::endl << "TRYING HIGH PERMISSIONS" << std::endl << std::endl;

		God.signForm(Shrub);
		God.signForm(Robot);
		God.signForm(Prez);

		std::cout << std::endl << "TRYING NORMAL PERMISSIONS" << std::endl << std::endl;

		Paul.signForm(Shrub);
		Paul.signForm(Robot);
		Paul.signForm(Prez);

		std::cout << std::endl << "TRYING LOW PERMISSIONS" << std::endl << std::endl;
		
		Flea.signForm(Shrub);
		Flea.signForm(Robot);
		Flea.signForm(Prez);

		std::cout << std::endl << "TRYING TO EXECUTE FORMS" << std::endl << std::endl;

		std::cout << std::endl << "TRYING HIGH PERMISSIONS" << std::endl << std::endl;
		
		Shrub.execute(God);
		Robot.execute(God);
		Prez.execute(God);

		std::cout << std::endl << "TRYING NORMAL PERMISSIONS" << std::endl << std::endl;

		Shrub.execute(Paul);
		Robot.execute(Paul);
		Prez.execute(Paul);

		std::cout << std::endl << "TRYING LOW PERMISSIONS" << std::endl << std::endl;
		
		Shrub.execute(Paul);
		Robot.execute(Paul);
		Prez.execute(Flea);
		
		std::cout << std::endl << "END" << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (AForm::GradeTooHighException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& except) {
		std::cout << except.what() << std::endl;
	}
	return (0);
}
