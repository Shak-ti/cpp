/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 11:50:23 by sconiat           #+#    #+#             */
/*   Updated: 2025/09/28 12:04:14 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Default PresidentialPardon", 145, 137)
{
	std::cout << "PresidentialPardonForm created by default with name " << 
	this->getName() << " (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm( std::string name ) : AForm(name, 145, 137)
{
	std::cout << "PresidentialPardonForm created with name " << this->getName() <<
	" (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& toCopy ) : AForm(toCopy)
{
	std::cout << "PresidentialPardonForm created by copy with name " << this->getName() << 
	" (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "PresidentialPardonForm " << this->getName() << " destroyed" << std::endl;
};

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& toCopy ) {
	std::cout << "PresidentialPardonForm copy operator called." << std::endl;
	if ( this != &toCopy ) {
		setIsSigned(toCopy.getIsSigned());
	}
	return (*this);
}

void	PresidentialPardonForm::setIsSigned( bool value ) {
	AForm::setIsSigned(value);
}

void	PresidentialPardonForm::beSigned( const Bureaucrat& someone ) {
	if (someone.getGrade() <= this->getGradeToSign()) {
		this->setIsSigned(true);
		std::cout << this->getName() << " was signed by " <<
			someone.getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}

std::ostream&	operator<<( std::ostream& os, const PresidentialPardonForm& toPrint ) {
	os << "PresidentialPardonForm " << toPrint.getName() << 
	" (gradeToSign : " << toPrint.getGradeToSign() <<
	", gradeToExecute : " << toPrint.getGradeToExecute() <<
	" status : " << toPrint.getIsSigned() << ")";
	return (os);
}

const char* PresidentialPardonForm::GradeTooHighException::what() const throw() {
	return "PresidentialPardonForm : Grade is too high!";
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw() {
	return "PresidentialPardonForm : Grade is too low!";
}
