/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 17:15:52 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

/* Operators Overload */

Dog & Dog::operator=(const Dog &rhs)
{
	this->type = rhs.getType();
	std::cout << "Dog copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Dog::Dog( const Dog &copy ): Animal(copy)
{
	this->type = copy.getType();
	std::cout << "Dog copy created !" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog " << GREEN << "created "
		<< RESET << "!" << std::endl;
}