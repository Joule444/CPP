/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:02 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/22 16:36:00 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"


/* Members Functions */

std::string const & AMateria::getType( void ) const
{
	return (this->elemType);
}

/* Operators Overload */

AMateria & AMateria::operator=( const AMateria &rhs )
{
	this->elemType = rhs.getType();
	std::cout << "Materia copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

AMateria::AMateria( std::string const & type ): elemType(type)
{
	std::cout << BOLD_WHITE << this->elemType << RESET << " type Materia "
		<< BOLD_GREEN << "created" << RESET << " !" << std::endl;
}

AMateria::AMateria( const AMateria & copy )
{
	this->elemType = copy.getType();
	std::cout << "Materia copy created !" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << BOLD_WHITE << this->elemType << RESET << " type Materia "
		<< BOLD_RED << "destroyed" << RESET << " !" << std::endl;
}

AMateria::AMateria( void ): elemType("Undefined")
{
	std::cout << BOLD_WHITE << this->elemType << RESET << " type Materia "
		<< BOLD_GREEN << "created" << RESET << " !" << std::endl;
}