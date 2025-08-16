/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:16:17 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 21:29:02 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public virtual IMateriaSource {

	public:

		MateriaSource( void );
		MateriaSource( const MateriaSource& );
		virtual ~MateriaSource();
		MateriaSource& operator=( const MateriaSource& );
		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );
};

#endif
