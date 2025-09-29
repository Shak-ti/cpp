/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/09/29 23:05:29 by sconiat          ###   ########.fr       */
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
		
		ShrubberyCreationForm	Shrub("shrub");
		RobotomyRequestForm		Robot("robot");
		PresidentialPardonForm	Prez("prez");

		std::cout << Shrub << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Prez << std::endl;

		std::cout << std::endl << "CREATING BUREAUCRATS" << std::endl << std::endl;

		Bureaucrat	Paul("Paul", 150);
//		Bureaucrat	God("God", 0);
		Bureaucrat	Flea("Flea", 150);
	
		std::cout << std::endl << "TRYING TO SIGN FORMS" << std::endl << std::endl;

		Paul.signForm(Shrub);
//		God.signForm(Shrub);
//		Flea.signForm(Shrub);

		Paul.signForm(Robot);
//		God.signForm(Robot);
//		Flea.signForm(Robot);

		Paul.signForm(Prez);
//		God.signForm(Prez);
//		Flea.signForm(Prez);

		std::cout << std::endl << "TRYING TO EXECUTE FORMS" << std::endl << std::endl;

//		Shrub.execute(God);
		Robot.execute(Paul);
//		Prez.execute(Flea);

//		Shrub.execute(God);
		Robot.execute(Paul);
//		Prez.execute(Flea);

//		Shrub.execute(God);
		Robot.execute(Paul);
//		Prez.execute(Flea);
		
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
