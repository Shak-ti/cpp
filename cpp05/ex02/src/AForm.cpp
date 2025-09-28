/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:29:46 by marvin            #+#    #+#             */
/*   Updated: 2025/09/12 16:29:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm(void) : 
	_name("Default"),
	_gradeToSign(150),
	_gradeToExecute(150),
	_isSigned(false) {
	std::cout << "AForm created by default with name " << 
	this->getName() << " (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

AForm::AForm( std::string name, int sign, int execute ) :
	_name(name),
	_gradeToSign(sign),
	_gradeToExecute(execute),
	_isSigned(false) {
	std::cout << "AForm created with name " << this->getName() <<
	" (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

AForm::AForm( const AForm& toCopy ) :
	_name(toCopy.getName()),
	_gradeToSign(toCopy.getGradeToSign()),
	_gradeToExecute(toCopy.getGradeToExecute()),
	_isSigned(toCopy.getIsSigned()) {
	std::cout << "AForm created by copy with name " << this->getName() << 
	" (gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

AForm::~AForm( void ) {
	std::cout << "AForm " << this->getName() << " destroyed" << std::endl;
};

AForm& AForm::operator=( const AForm& toCopy ) {
	std::cout << "AForm copy operator called." << std::endl;
	if ( this != &toCopy ) {
		setIsSigned(toCopy.getIsSigned());
	}
	return (*this);
}

std::string AForm::getName( void ) const {
	return (this->_name);
}

int	AForm::getGradeToSign( void ) const {
	return (_gradeToSign);
}

int	AForm::getGradeToExecute( void ) const {
	return (_gradeToExecute);
}

bool	AForm::getIsSigned( void ) const {
	return (_isSigned);
}

void	AForm::setIsSigned( bool value ) {
	this->_isSigned = value;
}

void	AForm::beSigned( const Bureaucrat& someone ) {
	if (someone.getGrade() <= this->getGradeToSign()) {
		this->setIsSigned(true);
		std::cout << this->getName() << " was signed by " <<
			someone.getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}

std::ostream&	operator<<( std::ostream& os, const AForm& toPrint ) {
	os << "AForm " << toPrint.getName() << 
	" (gradeToSign : " << toPrint.getGradeToSign() <<
	", gradeToExecute : " << toPrint.getGradeToExecute() <<
	" status : " << toPrint.getIsSigned() << ")";
	return (os);
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "AForm : Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "AForm : Grade is too low!";
}
