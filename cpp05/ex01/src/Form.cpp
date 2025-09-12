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


#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>

class Form
{
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				isSigned;

	public:
		Form( void ) ;
		Form( std::string, int ) ;
		~Form( void ) ;
		Form( const Form& ) ;
		Form& operator=( const Form& ) ;

		std::string getName( void ) const;
		void		setName( std::string ) ;
		int			getGrade( void ) const;
		void		setGrade( int ) ;
		void		incrementGrade( void ) ;
		void		decrementGrade( void ) ;

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