/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:12:16 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/03 13:20:49 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"
#include "includes/HumanB.hpp"

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type;
}

void	HumanB::attack()
{
	std::cout << WHITE << this->_name << RESET << " attacks with their " << CYAN << this->_weapon->getType() << RESET << std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "Human B " << GREEN << "created !" << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human B " << RED << "destroyed !" << RESET << std::endl;
}
