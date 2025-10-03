/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/10/03 17:37:46 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"


int main() {
	try {
		std::cout << "CREATING FORMS" << std::endl << std::endl;
		Form	TestForm;

		std::cout << TestForm << std::endl;

		Form	LaissezPassezA38("LaissezPassezA38", 42, 42);

		std::cout << LaissezPassezA38 << std::endl;

		std::cout << std::endl << "CREATING BUREAUCRATS" << std::endl << std::endl;

		Bureaucrat	Paul("Paul", 42);
		Bureaucrat	God("God", 1);
		Bureaucrat	Flea("Flea", 150);
	
		std::cout << std::endl << "TRYING TO SIGN FORMS" << std::endl << std::endl;

		Paul.signForm(LaissezPassezA38);
		God.signForm(LaissezPassezA38);
		Flea.signForm(LaissezPassezA38);

		std::cout << std::endl << "END" << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (Form::GradeTooHighException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (Form::GradeTooLowException& except) {
		std::cout << except.what() << std::endl;
	}
	return (0);
}
