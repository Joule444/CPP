/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:07:57 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/05 17:15:39 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

void	Harl::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->_level[i])
		{
			(this->*_func[i])();
			return ;
		}
	}
	std::cout << "<Harl> " << "Sorry, I don't know this type of message !" << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "<Harl> [" << RED << "ERROR" << RESET << "] message !" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "<Harl> [" << YELLOW << "WARNING" << RESET << "] message !" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "<Harl> [" << CYAN << "INFO" << RESET << "] message !" << std::endl;
}

void	Harl::_debug( void )
{
	std::cout << "<Harl> [" << GREEN << "DEBUG" << RESET << "] message !" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << "Harl destroyed !" << std::endl;
}

Harl::Harl( void )
{
	this->_func[0] = &Harl::_debug;
	this->_level[0] = "DEBUG";
	this->_func[1] = &Harl::_info;
	this->_level[1] = "INFO";
	this->_func[2] = &Harl::_warning;
	this->_level[2] = "WARNING";
	this->_func[3] = &Harl::_error;
	this->_level[3] = "ERROR";
	std::cout << "Harl created !" << std::endl;
}