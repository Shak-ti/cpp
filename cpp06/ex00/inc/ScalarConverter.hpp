/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:32:33 by sconiat           #+#    #+#             */
/*   Updated: 2025/10/05 20:02:07 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>

class ScalarConverter {
	protected:
		ScalarConverter( void );
		ScalarConverter( ScalarConverter& const );
		~ScalarConverter( void );
		ScalarConverter&	operator=( ScalarConverter& const );

	public:
		static void	convert( std::string const );
};

#endif
