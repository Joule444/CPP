/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:02 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/24 14:20:53 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

/* Members Functions */

void	Character::unequip( int idx )
{
	if (idx < 0 || idx > 3)
	{
		std::cout << RED << "Inventory slots range is 0-4 only !" << RESET
			<< std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
	{
		this->_inventory[idx] = NULL;
	}
	else 
	{
		std::cout << RED << "Slot " << BOLD_YELLOW << idx
			<< RED << " is already empty !" << std::endl;
	}
}

void	Character::equip( AMateria *m )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "Materia equiped in slot " << BOLD_YELLOW
				<< i << RESET << " !" << std::endl;
			return ;
		}
	}
	std::cout << BOLD_WHITE << this->_name
		<< RED << "'s inventory is full !" << RESET << std::endl;
}

std::string const & Character::getName( void ) const
{
	return (this->_name);
}

/* Operators Overload */

Character & Character::operator=( const Character &rhs )
{
	
	std::cout << "Character copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Character::Character( const Character & copy )
{
	this->_name = copy.getName();
	
	std::cout << "Character copy created !" << std::endl;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
		}
	}
	std::cout << "Character " << BOLD_RED
		<< "destroyed" << RESET << " !" << std::endl;
}

Character::Character( void ): _name("Unnamed")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character " << BOLD_GREEN
		<< "created" << RESET << " !" << std::endl;
}