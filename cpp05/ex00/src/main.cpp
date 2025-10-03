/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/10/03 17:55:51 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main() {
	try {
		std::cout << std::endl << "TEST BUREAUCRAT DEFAULT CONSTRUCTOR" << std::endl << std::endl;

		Bureaucrat	Test;

		std::cout << Test << std::endl;

		std::cout << std::endl << "CREATING BUREAUCRAT" << std::endl << std::endl;
		
		Bureaucrat	Paul("Paul", 42);
		
		std::cout << Paul << std::endl;
		Paul.incrementGrade();
		std::cout << Paul << std::endl;
		Paul.decrementGrade();
		std::cout << Paul << std::endl;

		std::cout << std::endl << "TEST CREATION TOO HIGH" << std::endl << std::endl;
		
		Bureaucrat	God("God", 0);

		std::cout << God << std::endl;

		std::cout << std::endl << "TEST CREATION TOO LOW" << std::endl << std::endl;
		
		Bureaucrat	Flea("Flea", 151);

		std::cout << Flea << std::endl;

		std::cout << std::endl << "TEST INCREMENTATION TOO HIGH" << std::endl << std::endl;
		
		Bureaucrat	God2("God2", 1);

		std::cout << God2 << std::endl;
		God2.incrementGrade();
		std::cout << God2 << std::endl;

		std::cout << std::endl << "TEST DECREMENTATION TOO LOW" << std::endl << std::endl;
		
		Bureaucrat	Flea2("Flea2", 150);

		std::cout << Flea2 << std::endl;
		Flea2.decrementGrade();
		std::cout << Flea2 << std::endl;	
	}
	catch (Bureaucrat::GradeTooHighException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& except) {
		std::cout << except.what() << std::endl;
	}
	return (0);
}
