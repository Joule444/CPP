/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:02 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/24 14:56:51 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cure.hpp"

/* Members Functions */

void	Cure::use( ICharacter & target )
{
	std::cout << "* heals " << BOLD_WHITE << target.getName() << RESET
		"'s wounds *" << std::endl;
}

Cure * Cure::clone( void ) const
{
	Cure *clone = new Cure();
	return (clone);
}

/* Operators Overload */

Cure & Cure::operator=( const Cure &rhs )
{
	this->elemType = rhs.getType();
	std::cout << "Cure Materia copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Cure::Cure( const Cure & copy ): AMateria("cure")
{
	*this = copy;
	std::cout << "Cure Materia copy created !" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << BOLD_BLUE << "Cure" << RESET << " Materia "
		<< BOLD_RED << "destroyed" << RESET << " !" << std::endl;
}

Cure::Cure( void )
{
	this->elemType = "cure";
	std::cout << BOLD_BLUE << "Cure" << RESET << " Materia "
		<< BOLD_GREEN << "created" << RESET << " !" << std::endl;
}