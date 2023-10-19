/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:18:40 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/17 13:33:45 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"

int	main( void )
{
	FragTrap bar("Fragger");
	std::cout << std::endl;
	
	ScavTrap	foo("Scavenger");
	std::cout << std::endl;
	
	ClapTrap	fubar("Claped");
	std::cout << std::endl;
	
	bar.highFiveGuys();
	std::cout << std::endl;
	
	foo.guardGate();
	std::cout << std::endl;

	foo.attack("Karen");
	std::cout << std::endl;
	
	return (0);
}