/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:25:20 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/17 12:01:06 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"

/* Members Function */

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_energyPts--;
	if (this->_energyPts <= 0)
	{
		this->_energyPts = 0;
		std::cout << CYAN << this->_name << RED
			<< " cannot be repaired, he is out of energy !" 
			<< RESET << std::endl;
		return ;
	}
	if (this->_hitPts == 0)
	{
		std::cout << CYAN << this->_name << RED
			<< " cannot be repaired, he is K.O. !" 
			<< RESET << std::endl;
		return ;
	}
	this->_hitPts += amount;
	std::cout << CYAN << this->_name << RESET
		<< " is repaired with " << GREEN << amount << RESET
		<< " Hit Points !" << std::endl;
	if (this->_hitPts > 10)
		this->_hitPts = 10;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPts == 0)
	{
		std::cout << CYAN << this->_name << RED
		<< " is already K.O. !" << RESET << std::endl;
		return ;
	}
	this->_hitPts -= amount;
	std::cout << CYAN << this->_name << RESET
		<< " takes " << RED << amount << RESET
		<< " points of damage !" << std::endl;
	if (this->_hitPts <= 0)
	{
		this->_hitPts = 0;
		std::cout << CYAN << this->_name << PURPLE
		<< " is now K.O. !" << RESET << std::endl;
	}
}

void	ClapTrap::attack( const std::string &target )
{
	(void) this->_attackDmg;
	if (this->_hitPts == 0)
	{
		std::cout << CYAN << this->_name << RED
		<< " is K.O., he cannot attack !"
		<< RESET << std::endl;
		return ;
	}
	this->_energyPts--;
	if (this->_energyPts < 0)
	{
		this->_energyPts = 0;
		std::cout << CYAN << this->_name << RED
			<< " cannot attack, he is out of energy !" 
			<< RESET << std::endl;
		return ;
	}
	std::cout << CYAN << this->_name << RESET
		<< " attacks " << YELLOW << target << RESET
		<< ", causing " << RED << this->_attackDmg << RESET
		<< " points of damage !" << std::endl;
}

/* Operators Overload */

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPts = rhs._hitPts;
	this->_energyPts = rhs._energyPts;
	this->_attackDmg = rhs._attackDmg;
	std::cout << "ClapTrap copy operator called from " 
		<< CYAN << this->_name << RESET << std::endl;
	return (*this);
}

/* Constructors & Destructors */

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "ClapTrap " 
		<< CYAN << name << RESET 
		<< " created !" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy )
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	std::cout << "ClapTrap copy from " 
		<< CYAN << this->_name << RESET 
		<< " created !" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " 
		<< CYAN << this->_name << RESET 
		<< " destroyed !" << std::endl;
}

ClapTrap::ClapTrap( void ) : _name("Unnamed"), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "ClapTrap " 
		<< CYAN << "Unnamed" << RESET 
		<< " created !" << std::endl;
}