/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/20 12:17:40 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

/* Members Functions */

Brain	&Cat::getBrain( void ) const
{
	return (*this->_brain);
}

void	Cat::makeSound( void ) const
{
	std::cout << "[" << CYAN << this->type << RESET
		<< "] : Miaouw !" << std::endl;
}

/* Operators Overload */

Cat & Cat::operator=(const Cat &rhs)
{
	this->type = rhs.getType();
	std::cout << "Cat copy operator called !" << std::endl;
	this->_brain = new Brain(*(rhs._brain));
	return (*this);
}

/* Constr & Destr */

Cat::Cat( const Cat &copy ): Animal(copy)
{
	this->type = copy.getType();
	std::cout << "Cat copy created !" << std::endl;
	this->_brain = new Brain(*(copy._brain));
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Cat " << GREEN << "created "
		<< RESET << "!" << std::endl;
	this->_brain = new Brain();
}