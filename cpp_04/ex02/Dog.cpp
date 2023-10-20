/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/20 12:17:34 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

/* Members Functions */

Brain	&Dog::getBrain( void ) const
{
	return (*this->_brain);
}

void	Dog::makeSound( void ) const
{
	std::cout << "[" << CYAN << this->type << RESET
		<< "] : Waf !" << std::endl;
}

/* Operators Overload */

Dog & Dog::operator=(const Dog &rhs)
{
	this->type = rhs.getType();
	std::cout << "Dog copy operator called !" << std::endl;
	this->_brain = new Brain(*(rhs._brain));
	return (*this);
}

/* Constr & Destr */

Dog::Dog( const Dog &copy ): Animal(copy)
{
	this->type = copy.getType();
	std::cout << "Dog copy created !" << std::endl;
	this->_brain = new Brain(*(copy._brain));
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Dog " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog " << GREEN << "created "
		<< RESET << "!" << std::endl;
	this->_brain = new Brain();
}
