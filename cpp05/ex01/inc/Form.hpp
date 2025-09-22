/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:29:44 by marvin            #+#    #+#             */
/*   Updated: 2025/09/12 16:29:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_isSigned;

	public:
		Form( void ) ;
		Form( std::string, int, int ) ;
		~Form( void ) ;
		Form( const Form& ) ;
		Form& operator=( const Form& ) ;

		std::string getName( void ) const;
		int			getGradeToSign( void ) const;
		int			getGradeToExecute( void ) const;
		bool		getIsSigned( void ) const;
		void		setIsSigned( bool );
		void		beSigned( const Bureaucrat & );

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
   		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
    	};
};

std::ostream& operator<<( std::ostream&, const Form& );

#endif
