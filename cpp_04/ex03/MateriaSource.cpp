/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:02 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/24 17:30:34 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.hpp"

/* Members Functions */

AMateria * MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i] != NULL && this->_learned[i]->getType() == type)
		{
			std::cout << "Materia Source send a clone of the learned Materia !"
				<< std::endl;
			return (this->_learned[i]->clone());
		}
	}
	std::cout << RED << "No such type in the Materia Source !" << RESET
		<< std::endl;
	return (NULL);
}

void	MateriaSource::learnMateria( AMateria *m )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i] == NULL)
		{
			this->_learned[i] = m;
			std::cout << "Materia learned in slot " << BOLD_YELLOW
				<< i << RESET << " !" << std::endl;
			return ;
		}
	}
	std::cout << RED << "Materia Source is full !" << RESET << std::endl;
}

/* Operators Overload */

MateriaSource & MateriaSource::operator=( const MateriaSource &rhs )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i] != NULL)
		{
			delete this->_learned[i];
			this->_learned[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (rhs._learned[i] != NULL)
		{
			this->_learned[i] = rhs._learned[i]->clone();
		}
	}
	std::cout << "Materia Source copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

MateriaSource::MateriaSource( const MateriaSource & copy )
{
	for (int i = 0; i < 4; i++)
	{
		this->_learned[i] = NULL;
	}
	for (int i = 0; i< 4; i++)
	{
		if (copy._learned[i] != NULL)
		{
			this->_learned[i] = copy._learned[i]->clone();
		}
	}
	std::cout << "Materia Source copy created !" << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i] != NULL)
		{
			delete this->_learned[i];
		}
	}
	std::cout << "Materia Source " << BOLD_RED
		<< " destroyed" << RESET << " !" << std::endl;
}

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		this->_learned[i] = NULL;
	}
	std::cout << "Materia Source " << BOLD_GREEN
		<< " created" << RESET << " !" << std::endl;
}