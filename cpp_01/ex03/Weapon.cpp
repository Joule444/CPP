/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:20:41 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 15:26:48 by jthuysba         ###   ########.fr       */
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

Weapon::Weapon()
{
	std::cout << "Weapon created !" << std::endl;
}
