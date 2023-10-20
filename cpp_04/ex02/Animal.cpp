/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 18:09:53 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

/* Members Functions */

void	Animal::makeSound( void ) const
{
	std::cout << "[" << CYAN << this->type << RESET
		<< "] : *Random animal sound*" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

/* Operators Overload */

Animal & Animal::operator=(const Animal &rhs)
{
	this->type = rhs.getType();
	std::cout << "Animal copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Animal::Animal( const Animal &copy )
{
	this->type = copy.getType();
	std::cout << "Animal copy created !" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

Animal::Animal( void ): type("Undefined animal")
{
	std::cout << "Animal " << GREEN << "created "
		<< RESET << "!" << std::endl;
}