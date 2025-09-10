/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:24 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 14:40:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150) {
	std::cout << "Bureaucrat " << *this << " created by default with name " << 
		this->getName() << " and grade " << this->getGrade() << std::endl;
};

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(150) {
	std::cout << "Bureaucrat " << *this << " created with name " << 
		this->getName() << " and grade " << this->getGrade() << std::endl;
};

Bureaucrat::Bureaucrat( const Bureaucrat& toCopy ) : _name(toCopy.getName()), _grade(toCopy.getGrade()) {
	std::cout << "Bureaucrat " << *this << " created by copy with name " << 
		this->getName() << " and grade " << this->getGrade() << std::endl;
};

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat " << *this << " destroyed" << std::endl;
};

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& toCopy ) {
	std::cout << "Bureaucrat " << *this << " copy operator called." << std::endl;
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
	if (this->getGrade() + 1 < 1)
		throw Bureaucrat::GradeTooHighException;
	this->setGrade(this->getGrade() + 1);
}

void		Bureaucrat::decrementGrade( void ) {
	if (this->getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException;
	this->setGrade(this->getGrade() + 1);
}

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& toPrint ) {
	os << toPrint.getName() << ", bureaucrat grade " << toPrint.getGrade() << ".";
	return (os);
}