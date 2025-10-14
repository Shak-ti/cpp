/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:32:33 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/14 09:33:53 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cstdlib>
# include <cstring>
# include <errno.h>
# include <limits.h>
# include <float.h>
# include <iomanip>

class ScalarConverter {
	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& );
		~ScalarConverter( void );
		ScalarConverter&	operator=( const ScalarConverter& );
		
	public:
		static void	convert( const std::string& );
};

#endif
