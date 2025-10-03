/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:24 by marvin            #+#    #+#             */
/*   Updated: 2025/10/03 17:56:34 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150) {
	std::cout << "Bureaucrat created by default with name " << 
		this->getName() << " and grade " << this->getGrade() << std::endl;
};

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat created with name " << 
		this->getName() << " and grade " << this->getGrade() << std::endl;
};

Bureaucrat::Bureaucrat( const Bureaucrat& toCopy ) : _name(toCopy.getName()), _grade(toCopy.getGrade()) {
	std::cout << "Bureaucrat created by copy with name " << 
		this->getName() << " and grade " << this->getGrade() << std::endl;
};

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat " << this->getName() << " destroyed" << std::endl;
};

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& toCopy ) {
	std::cout << "Bureaucrat copy operator called." << std::endl;
	if ( this != &toCopy ) {
		this->setName(toCopy.getName());
		this->setGrade(toCopy.getGrade());
	}
	return (*this);
}

std::string Bureaucrat::getName( void ) const {
	return (this->_name);
}

void		Bureaucrat::setName( std::string name ) {
	this->_name = name;
}

int			Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void		Bureaucrat::setGrade( int grade ) {
	this->_grade = grade;
}

void		Bureaucrat::incrementGrade( void ) {
	if (this->getGrade() - 1 < 1)
		throw GradeTooHighException();
	this->setGrade(this->getGrade() - 1);
	std::cout << this->getName() << " grade incremented" << std::endl;
}

void		Bureaucrat::decrementGrade( void ) {
	if (this->getGrade() + 1 > 150)
		throw GradeTooLowException();
	this->setGrade(this->getGrade() + 1);
	std::cout << this->getName() << " grade decremented" << std::endl;
}

void	Bureaucrat::signForm( AForm& toSign ) {
	try {
		toSign.beSigned(*this);
		std::cout << this->getName() << " signed " << toSign.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException & exept) {
		std::cout << this->getName() << " couldn't sign " << toSign.getName() <<
		" because the grade needed to sign the form is higher." << std::endl;
	}
}

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& toPrint ) {
	os << toPrint.getName() << ", bureaucrat grade " << toPrint.getGrade() << ".";
	return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat : Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat : Grade is too low!";
}
