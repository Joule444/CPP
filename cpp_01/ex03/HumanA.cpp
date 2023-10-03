/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:09:31 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/03 13:19:47 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"
#include "includes/HumanA.hpp"

void	HumanA::attack()
{
	std::cout << WHITE << this->_name << " attacks with their " << CYAN << this->_weapon.getType() << RESET << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
	std::cout << "Human A " << GREEN << "created !" << RESET << std::endl;
}

HumanA::~HumanA()
{
		std::cout << "Human A " << RED << "destroyed !" << RESET << std::endl;
}
