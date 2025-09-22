/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 14:40:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"


int main() {
	try {
		Form	TestForm;

		std::cout << TestForm << std::endl;

		Form	LaissezPassezA38("LaissezPassezA38", 42, 42);

		std::cout << LaissezPassezA38 << std::endl;

		Bureaucrat	Paul("Paul", 42);
		Bureaucrat	God("God", 0);
		Bureaucrat	Flea("Flea", 150);
	
		Paul.signForm(LaissezPassezA38);
		God.signForm(LaissezPassezA38);
		Flea.signForm(LaissezPassezA38);
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
