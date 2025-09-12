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

int main() {
	try {
		Bureaucrat	Paul("Paul", 42);
		
		std::cout << Paul << std::endl;
		Paul.incrementGrade();
		std::cout << Paul << std::endl;
		Paul.decrementGrade();
		std::cout << Paul << std::endl;

		Bureaucrat	God("God", 0);

		std::cout << God << std::endl;
		God.incrementGrade();
		std::cout << God << std::endl;

		Bureaucrat	Flea("Flea", 150);

		std::cout << Flea << std::endl;
		Flea.decrementGrade();
		std::cout << Flea << std::endl;		
	}
	catch (Bureaucrat::GradeTooHighException& except) {
		std::cout << except.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& except) {
		std::cout << except.what() << std::endl;
	}
	return (0);
}