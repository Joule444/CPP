/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 18:24:24 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"

/* Members Functions */

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "[" << CYAN << this->type << RESET
		<< "] : *Random wrong animal sound*" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

/* Operators Overload */

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.getType();
	std::cout << "Wrong animal copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	this->type = copy.getType();
	std::cout << "Wrong animal copy created !" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Wrong animal " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

WrongAnimal::WrongAnimal( void ): type("Undefined wrong animal")
{
	std::cout << "Wrong animal " << GREEN << "created "
		<< RESET << "!" << std::endl;
}