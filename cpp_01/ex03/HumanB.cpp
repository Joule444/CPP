/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:12:16 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 15:16:21 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"
#include "includes/HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << "Human B created !" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human B destroyed !" << std::endl;
}
