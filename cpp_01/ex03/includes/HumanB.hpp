/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:03:54 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 15:17:37 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
	#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB();
		~HumanB();
		
		void	attack();

	private:
	
		Weapon		_weapon;
		std::string	_name;
};

#endif