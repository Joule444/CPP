/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:44:46 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/22 16:25:29 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
	#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	protected:

		//...

	public:
	
		//Constr & Destr
		Ice( void );
		~Ice( void );
		Ice( const Ice & copy );
		
		//Operators Overload
		Ice &operator=( const Ice &rhs );

		//Members Functions
		// virtual Ice* clone() const = 0;
		// virtual void use(ICharacter & target);
};

#endif
