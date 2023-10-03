/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:20:41 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/03 13:29:46 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"

std::string	const &Weapon::getType()
{
	return (_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << "Weapon " << GREEN << "created !" << RESET << std::endl;
}

Weapon::Weapon()
{
	this->_type = "hands";
	std::cout << "Weapon " << GREEN << "created !" << RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << RED << "destroyed !" << RESET << std::endl;
}
