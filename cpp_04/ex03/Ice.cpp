/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:02 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/22 16:48:57 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"

/* Members Functions */

Ice * Ice::clone( void ) const
{
	Ice *clone = new Ice();
	return (clone);
}

/* Operators Overload */

Ice & Ice::operator=( const Ice &rhs )
{
	this->elemType = rhs.getType();
	std::cout << "Ice Materia copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Ice::Ice( const Ice & copy )
{
	this->elemType = copy.getType();
	std::cout << "Ice Materia copy created !" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << BOLD_CYAN << "Ice" << RESET << " Materia "
		<< BOLD_RED << "destroyed" << RESET << " !" << std::endl;
}

Ice::Ice( void )
{
	this->elemType = "ice";
	std::cout << BOLD_CYAN << "Ice" << RESET << " Materia "
		<< BOLD_GREEN << "created" << RESET << " !" << std::endl;
}