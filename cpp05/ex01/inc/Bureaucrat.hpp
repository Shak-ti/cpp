/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:40:35 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 14:40:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "./Form.hpp"

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;

	public:
		Bureaucrat( void ) ;
		Bureaucrat( std::string, int ) ;
		~Bureaucrat( void ) ;
		Bureaucrat( const Bureaucrat& ) ;
		Bureaucrat& operator=( const Bureaucrat& ) ;

		std::string getName( void ) const;
		void		setName( std::string ) ;
		int			getGrade( void ) const;
		void		setGrade( int ) ;
		void		incrementGrade( void ) ;
		void		decrementGrade( void ) ;
		void		signForm( const Form& ) const ;

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
   		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
    	};
};

std::ostream& operator<<( std::ostream&, const Bureaucrat& );

#endif