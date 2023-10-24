/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/10/24 16:55:51 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
	#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:

		AMateria* _learned[4];
		
	public:
	
		//Constr & Destr
		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( const MateriaSource & copy );
	
		//Operators Overload
		MateriaSource &operator=( const MateriaSource &rhs );

		//Members Functions
		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );

};

#endif
