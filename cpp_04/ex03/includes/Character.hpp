/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/10/24 14:22:00 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
	#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
	
		std::string	_name;
		AMateria	*_inventory[4];

	public:
	
		//Constr & Destr
		Character( void );
		~Character( void );
		Character( const Character & copy );
		Character( std::string name );
		
		//Operators Overload
		Character &operator=( const Character &rhs );

		//Members Functions
		virtual std::string const & getName( void ) const;
		virtual void equip( AMateria* m );
		virtual void unequip( int idx );
		virtual void use( int idx, ICharacter& target );
};

#endif
