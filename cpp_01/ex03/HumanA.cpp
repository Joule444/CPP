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

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}

HumanA::HumanA(Weapon weapon)
{
	this->_weapon = weapon;
	std::cout << "Human A created !" << std::endl;
}
