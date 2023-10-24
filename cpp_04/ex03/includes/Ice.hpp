/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/10/24 13:45:37 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
	#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
	
		//Constr & Destr
		Ice( void );
		~Ice( void );
		Ice( const Ice & copy );
		
		//Operators Overload
		Ice &operator=( const Ice &rhs );

		//Members Functions
		virtual Ice* clone( void ) const;
		// virtual void use(ICharacter & target);
};

#endif
