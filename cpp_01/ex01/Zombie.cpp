/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:55:32 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 13:20:11 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << WHITE << this->_name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Zombie " << GREEN << "created !" << RESET << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie \"" << WHITE << name << RESET << "\"" << GREEN << " created !" << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie \"" << WHITE << this->_name << RESET << "\"" << RED << " destroyed !" << RESET << std::endl;
}
