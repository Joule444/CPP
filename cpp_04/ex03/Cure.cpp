/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:02 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/22 16:35:19 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cure.hpp"

/* Members Functions */

//...

/* Operators Overload */

Cure & Cure::operator=( const Cure &rhs )
{
	this->elemType = rhs.getType();
	std::cout << "Cure Materia copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Cure::Cure( const Cure & copy )
{
	this->elemType = copy.getType();
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