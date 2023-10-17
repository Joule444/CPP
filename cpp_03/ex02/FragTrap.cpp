/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:23:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/17 13:36:32 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/FragTrap.hpp"

/* Members Function */

void	FragTrap::highFiveGuys( void )
{
	std::cout << "FragTrap " << CYAN << this->_name
		<< RESET << " asks for an high five !" << std::endl;
}

void	FragTrap::attack( const std::string &target )
{
	(void) this->_attackDmg;
	if (this->_hitPts == 0)
	{
		std::cout << "FragTrap " << CYAN << this->_name << RED
		<< " is K.O., he cannot attack !"
		<< RESET << std::endl;
		return ;
	}
	this->_energyPts--;
	if (this->_energyPts < 0)
	{
		this->_energyPts = 0;
		std::cout << "FragTrap " << CYAN << this->_name << RED
			<< " cannot attack, he is out of energy !" 
			<< RESET << std::endl;
		return ;
	}
	std::cout << "FragTrap " << CYAN << this->_name << RESET
		<< " attacks " << YELLOW << target << RESET
		<< ", causing " << RED << this->_attackDmg << RESET
		<< " points of damage !" << std::endl;
}

/* Operators Overload */

FragTrap & FragTrap::operator=( const FragTrap &rhs )
{
	this->_name = rhs._name;
	this->_hitPts = rhs._hitPts;
	this->_energyPts = rhs._energyPts;
	this->_attackDmg = rhs._attackDmg;
	std::cout << "FragTrap copy operator called from " 
		<< CYAN << this->_name << RESET << std::endl;
	return (*this);
}

/* Constructors & Destructors */

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap " 
		<< CYAN << name << RESET 
		<< " created !" << std::endl;
}

FragTrap::FragTrap( const FragTrap &copy ): ClapTrap(copy)
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	std::cout << "FragTrap copy from " 
		<< CYAN << this->_name << RESET 
		<< " created !" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " 
		<< CYAN << this->_name << RESET 
		<< " destroyed !" << std::endl;
}

FragTrap::FragTrap( void )
{
	this->_name = "Unnamed";
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap " 
		<< CYAN << "Unnamed" << RESET 
		<< " created !" << std::endl;
}