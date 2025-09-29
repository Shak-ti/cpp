/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:29:44 by marvin            #+#    #+#             */
/*   Updated: 2025/09/12 16:29:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <stdexcept>
# include <fstream>
# include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_isSigned;
	
	protected:
		const std::string	_target;

	public:
		AForm( void ) ;
		AForm( const AForm& ) ;
		AForm( std::string, int, int ) ;
		AForm( std::string, int, int, std::string ) ;
		virtual ~AForm( void ) ;
		AForm& operator=( const AForm& ) ;

		std::string		getName( void ) const;
		int				getGradeToSign( void ) const;
		int				getGradeToExecute( void ) const;
		bool			getIsSigned( void ) const;
		void			setIsSigned( bool );
		void			beSigned( const Bureaucrat & );
		std::string		getTarget( void ) const;
		virtual void	execute( Bureaucrat const & ) const = 0;

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
   		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
    	};
};

std::ostream& operator<<( std::ostream&, const AForm& );

#endif
