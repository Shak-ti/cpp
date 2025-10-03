/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:29:46 by marvin            #+#    #+#             */
/*   Updated: 2025/09/29 21:33:45 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(void) : 
	_name("Default"),
	_gradeToSign(150),
	_gradeToExecute(150),
	_isSigned(false) {
	std::cout << "Form created by default with name " << 
	this->getName() << " (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

Form::Form( std::string name, int sign, int execute ) :
	_name(name),
	_gradeToSign(sign),
	_gradeToExecute(execute),
	_isSigned(false) {
	std::cout << "Form created with name " << this->getName() <<
	" (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

Form::Form( const Form& toCopy ) :
	_name(toCopy.getName()),
	_gradeToSign(toCopy.getGradeToSign()),
	_gradeToExecute(toCopy.getGradeToExecute()),
	_isSigned(toCopy.getIsSigned()) {
	std::cout << "Form created by copy with name " << this->getName() << 
	" (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

Form::~Form( void ) {
	std::cout << "Form " << this->getName() << " destroyed" << std::endl;
};

Form& Form::operator=( const Form& toCopy ) {
	std::cout << "Form copy operator called." << std::endl;
	if ( this != &toCopy ) {
		setIsSigned(toCopy.getIsSigned());
	}
	return (*this);
}

std::string Form::getName( void ) const {
	return (this->_name);
}

int	Form::getGradeToSign( void ) const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute( void ) const {
	return (this->_gradeToExecute);
}

bool	Form::getIsSigned( void ) const {
	return (this->_isSigned);
}

void	Form::setIsSigned( bool value ) {
	this->_isSigned = value;
}

void	Form::beSigned( const Bureaucrat& someone ) {
	if (someone.getGrade() <= this->getGradeToSign()) {
		this->setIsSigned(true);
		std::cout << this->getName() << " was signed by " <<
			someone.getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}

std::ostream&	operator<<( std::ostream& os, const Form& toPrint ) {
	os << "Form " << toPrint.getName() << 
	" (gradeToSign : " << toPrint.getGradeToSign() <<
	", gradeToExecute : " << toPrint.getGradeToExecute() <<
	" status : " << toPrint.getIsSigned() << ")";
	return (os);
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Form : Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Form : Grade is too low!";
}
