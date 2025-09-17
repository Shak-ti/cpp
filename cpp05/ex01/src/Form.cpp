/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:29:46 by marvin            #+#    #+#             */
/*   Updated: 2025/09/12 16:29:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(void) : 
	_name("Default"),
	_gradeToSign(150),
	_gradeToExecute(150),
	_isSigned(false) {
	std::cout << "Form created by default with name " << 
	this->getName() << ".(gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

Form::Form( std::string name, int sign, int execute ) :
	_name(name),
	_gradeToSign(sign),
	_gradeToExecute(execute),
	_isSigned(false) {
	std::cout << "Form created with name " << this->getName() <<
	".(gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

Form::Form( const Form& toCopy ) :
	_name(toCopy.getName()),
	_gradeToSign(toCopy.getGradeToSign()),
	_gradeToExecute(toCopy.getGradeToExecute()),
	_isSigned(toCopy.getIsSigned()) {
	std::cout << "Form created by copy with name " << this->getName() << 
	".(gradeToSign : " << this->getGradeToSign() <<
	", gradeToExecute : " << this->getGradeToExecute() << ")" << std::endl;
};

Form::~Form( void ) {
	std::cout << "Form " << this->getName() << " destroyed" << std::endl;
};

Form& Form::operator=( const Form& toCopy ) {
	std::cout << "Form copy operator called." << std::endl;
	if ( this != &toCopy ) {
		this->setName(toCopy.getName());
		this->setGrade(toCopy.getGrade());
	}
	return (*this);
}

std::string Form::getName( void ) const {
	return (this->_name);
}

void		Form::setName( std::string name ) {
	this->_name = name;
}

int			Form::getGrade( void ) const {
	return (this->_grade);
}

void		Form::setGrade( int grade ) {
	this->_grade = grade;
}

void		Form::incrementGrade( void ) {
	if (this->getGrade() - 1 < 1)
		throw GradeTooHighException();
	this->setGrade(this->getGrade() - 1);
}

void		Form::decrementGrade( void ) {
	if (this->getGrade() + 1 > 150)
		throw GradeTooLowException();
	this->setGrade(this->getGrade() + 1);
}

std::ostream&	operator<<( std::ostream& os, const Form& toPrint ) {
	os << toPrint.getName() << ", Form grade " << toPrint.getGrade() << ".";
	return (os);
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}