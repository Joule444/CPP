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

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}

HumanA::HumanB()
{
	std::cout << "Human B created !" << std::endl;
}