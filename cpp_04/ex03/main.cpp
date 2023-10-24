/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:44:18 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/24 14:47:03 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/ICharacter.hpp"
#include "includes/Character.hpp"


int	main( void )
{
	ICharacter* me = new Character("me");
	AMateria *tmp = new Ice();

	me->equip(tmp);
	
	delete me;
	delete tmp;
	return (0);
}