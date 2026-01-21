/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:21:56 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/21 20:38:55 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <map>
# include <stdexcept>
# include <fstream>
# include <fcntl.h>
# include <ctime>

# define FAILURE -1
# define SUCCESS 0

class	BitcoinExchange
{
	private:
		std::map<std::string, int>	_data;
		
		int	parseLine( const std::string& ) const;

	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& );
		BitcoinExchange( std::ifstream& );
		~BitcoinExchange( void );

		BitcoinExchange&	operator=( const BitcoinExchange& );

		int		getValue( const std::string& ) const;
		void	setValue( std::string, int );

		class BitcoinExchangeException : public std::exception {
			private:
				std::string	errorMessage;
				
			public:
				BitcoinExchangeException( const std::string& );
				virtual const char* what() const throw();
		};
};

#endif
