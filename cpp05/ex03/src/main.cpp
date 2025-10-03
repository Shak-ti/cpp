/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/10/03 18:10:38 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"

int main() {
	try {
		std::cout << "CREATING INTERN" << std::endl << std::endl;

		Intern	Tom;

		std::cout << std::endl << "CREATING FORMS WITH INTERN" << std::endl << std::endl;
		
		AForm	*Prez = Tom.makeForm("presidential pardon", "prezTarget");
		AForm	*Shrub = Tom.makeForm("robotomy request", "robotTarget");
		AForm	*Robot = Tom.makeForm("shrubbery creation", "shrubTarget");
		
		std::cout << std::endl << "PRINTING FORMS" << std::endl << std::endl;		

		std::cout << *Shrub << std::endl;
		std::cout << *Robot << std::endl;
		std::cout << *Prez << std::endl;

		std::cout << std::endl << "CREATING BUREAUCRAT" << std::endl << std::endl;

		Bureaucrat	God("God", 1);

		std::cout << std::endl << "TRYING TO SIGN FORMS" << std::endl << std::endl;
		
		God.signForm(*Shrub);
		God.signForm(*Robot);
		God.signForm(*Prez);

		std::cout << std::endl << "TRYING TO EXECUTE FORMS" << std::endl << std::endl;
		
		Shrub->execute(God);
		Robot->execute(God);
		Prez->execute(God);
		
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
