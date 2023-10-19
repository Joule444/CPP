/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 18:54:19 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

/* Members Functions */

void	Cat::makeSound( void ) const
{
	std::cout << "[" << CYAN << this->type << RESET
		<< "] : Miaouw !" << std::endl;
}

/* Operators Overload */

Cat & Cat::operator=(const Cat &rhs)
{
	this->_brain = new Brain(*(rhs._brain));
	this->type = rhs.getType();
	std::cout << "Cat copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Cat::Cat( const Cat &copy ): Animal(copy)
{
	this->_brain = new Brain(*(copy._brain));
	this->type = copy.getType();
	std::cout << "Cat copy created !" << std::endl;
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

Cat::Cat( void )
{
	this->_brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat " << GREEN << "created "
		<< RESET << "!" << std::endl;
}