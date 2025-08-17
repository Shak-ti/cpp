/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:16:17 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 19:51:24 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public virtual IMateriaSource {

	private:

		AMateria		*_stack[4];
		unsigned int	_stackSize;


	public:

		MateriaSource( void );
		MateriaSource( const MateriaSource& );
		virtual ~MateriaSource();
		MateriaSource& operator=( const MateriaSource& );
		
		void 		learnMateria( AMateria* );
		AMateria*	createMateria( std::string const & type );
		AMateria	*getMateria( unsigned int ) const;
		void		setMateria( AMateria*, unsigned int );

};

#endif
