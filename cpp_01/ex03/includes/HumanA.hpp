/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:03:54 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 15:29:22 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
	#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA( Weapon weapon );
		~HumanA();

		void	attack();

	private:
	
		Weapon		_weapon;
		std::string	_name;
};

#endif