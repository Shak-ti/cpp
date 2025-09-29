/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:02:15 by sconiat           #+#    #+#             */
/*   Updated: 2025/09/29 23:13:55 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	AForm("ShrubberyCreation", 145, 137, target) {
};

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	if ( this->getTarget().empty() ) {
		std::cout << "No target" << std::endl;
	} else if ( this->getIsSigned() == false ) {
		std::cout << "Can't execute form " << this->getName()
			<< " because it is not signed." << std::endl;
	} else if ( executor.getGrade() > this->getGradeToExecute() ) {
		std::cout << "Can't execute form " << this->getName()
			<< " because grade of executor too low." << std::endl;
	} else {
		std::ofstream	file;
		std::string		fileName = "../" + this->getTarget() + "_shrubbery";

		file.open(fileName.c_str());
		if ( !file.is_open() ) {
			std::cout << "Error" << std::endl;
			return ;
		}
		file << "       _-_" << std::endl <<
			"    /~~   ~~\\ " << std::endl <<
			" /~~         ~~\\" << std::endl <<
			"{               }" << std::endl <<
			" \\  _-     -_  /" << std::endl <<
			"   ~  \\\\ //  ~" << std::endl <<
			"_- -   | | _- _" << std::endl <<
			"  _ -  | |   -_" << std::endl <<
			"      // \\\\" << std::endl;
	}
}
