/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:21:56 by sconiat           #+#    #+#             */
/*   Updated: 2026/01/21 18:39:07 by sconiat          ###   ########.fr       */
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

// class Date
// {
// 	private:

// 		int	_year;
// 		int	_month;
// 		int	_day;

// 	public:
// 		Date( void );
// 		Date( const Date& );
// 		Date( std::ifstream& );
// 		~Date( void );

// 		Date&	operator>( const Date& );

// 		int		getValue( const Date& ) const;
// 		void	setValue( Date, int );
// };

//use time_t

class	BitcoinExchange
{
	private:
		std::map<time_t, int>	_data;
		
		int	parseLine( const std::string& ) const;

	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& );
		BitcoinExchange( std::ifstream& );
		~BitcoinExchange( void );

		BitcoinExchange&	operator=( const BitcoinExchange& );

		int		getValue( const time_t& ) const;
		void	setValue( time_t, int );

		// class BitcoinExchangeExcept : public std::exception {
		// 	private:
		// 		std::string	errorMessage;
				
		// 	public:
		// 		BitcoinExchangeExcept( const std::string& );
		// 		virtual const char* what() const throw();
		// };
};

#endif
