/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:09:31 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 15:29:18 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"
#include "includes/HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
	this->_weapon = weapon;
	std::cout << "Human A created !" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Human A destroyed !" << std::endl;
}
