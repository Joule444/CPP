/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 18:25:39 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/WrongCat.hpp"

/* Members Functions */

void	WrongCat::makeSound( void ) const
{
	std::cout << "[" << CYAN << this->type << RESET
		<< "] : Miaouw !" << std::endl;
}

/* Operators Overload */

WrongCat & WrongCat::operator=(const WrongCat &rhs)
{
	this->type = rhs.getType();
	std::cout << "WrongCat copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

WrongCat::WrongCat( const WrongCat &copy ): WrongAnimal(copy)
{
	this->type = copy.getType();
	std::cout << "WrongCat copy created !" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "WrongCat " << GREEN << "created "
		<< RESET << "!" << std::endl;
}