/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:25:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/17 13:07:28 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScavTrap.hpp"

/* Members Function */

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << CYAN << this->_name << BLUE
		<< " is now in Gate Keeper mode !"
		<< RESET << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	(void) this->_attackDmg;
	if (this->_hitPts == 0)
	{
		std::cout << "ScavTrap " << CYAN << this->_name << RED
		<< " is K.O., he cannot attack !"
		<< RESET << std::endl;
		return ;
	}
	this->_energyPts--;
	if (this->_energyPts < 0)
	{
		this->_energyPts = 0;
		std::cout << "ScavTrap " << CYAN << this->_name << RED
			<< " cannot attack, he is out of energy !" 
			<< RESET << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << CYAN << this->_name << RESET
		<< " attacks " << YELLOW << target << RESET
		<< ", causing " << RED << this->_attackDmg << RESET
		<< " points of damage !" << std::endl;
}

/* Operators Overload */

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPts = rhs._hitPts;
	this->_energyPts = rhs._energyPts;
	this->_attackDmg = rhs._attackDmg;
	std::cout << "ScavTrap copy operator called from " 
		<< CYAN << this->_name << RESET << std::endl;
	return (*this);
}

/* Constructors & Destructors */

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	std::cout << "ScavTrap " 
		<< CYAN << name << RESET 
		<< " created !" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &copy ): ClapTrap(copy)
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	std::cout << "ScavTrap copy from " 
		<< CYAN << this->_name << RESET 
		<< " created !" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " 
		<< CYAN << this->_name << RESET 
		<< " destroyed !" << std::endl;
}

ScavTrap::ScavTrap( void )
{
	this->_name = "Unnamed";
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	std::cout << "ScavTrap " 
		<< CYAN << "Unnamed" << RESET 
		<< " created !" << std::endl;
}