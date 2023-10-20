/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:09:39 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/20 11:46:54 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"
#include "includes/Animal.hpp"

/* Members Functions */

void	Brain::setIdea( int id, std::string idea )
{
	if (id < 0 || id >= 100)
		std::cerr << RED << " Error : Invalid ID in setIdea !" << std::endl;
	this->ideas[id] = idea;
}

std::string	Brain::getIdea( int id ) const
{
	if (id < 0 || id >= 100)
		std::cerr << RED << " Error : Invalid ID in getIdea !" << std::endl;
	return (this->ideas[id]);
}

/* Operators Overload */

Brain & Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	std::cout << "Brain copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Brain::Brain( const Brain &copy )
{
	*this = copy;
	std::cout << "Brain copy created !" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

Brain::Brain( void )
{
	std::cout << "Brain " << GREEN << "created "
		<< RESET << "!" << std::endl;
}