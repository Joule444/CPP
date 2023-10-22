/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:44:46 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/22 16:28:36 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
	#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	protected:

		//...

	public:
	
		//Constr & Destr
		Cure( void );
		~Cure( void );
		Cure( const Cure & copy );
		
		//Operators Overload
		Cure &operator=( const Cure &rhs );

		//Members Functions
		// virtual Cure* clone() const = 0;
		// virtual void use(ICharacter & target);
};

#endif
