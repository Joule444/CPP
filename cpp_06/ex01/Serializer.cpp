/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:26:21 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/08 19:41:04 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"

/* Members Functions */

Data* Serializer::deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t	Serializer::serialize( Data *ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

/* Overload Operators */

Serializer &Serializer::operator=( const Serializer &rhs )
{
	(void) rhs;
	return (*this);
}

/* Constr & Destr */

Serializer::Serializer( const Serializer &copy )
{
	*this = copy;
	std::cout << DARK_WHITE
		<< "Serializer : Copy constructor called"
		<< RESET << std::endl;
}

Serializer::~Serializer( void )
{
	std::cout << DARK_WHITE
		<< "Serializer : Destructor called"
		<< RESET << std::endl;
}

Serializer::Serializer( void )
{
	std::cout << DARK_WHITE
		<< "ScalarConverter : Constructor called"
		<< RESET << std::endl;
}