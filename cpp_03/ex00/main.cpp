/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:18:40 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/16 17:08:02 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"

int	main( void )
{
	ClapTrap foo = ClapTrap("Foo");
	std::cout << std::endl;
	
	foo.attack("Feur");
	std::cout << std::endl;
	
	foo.takeDamage(8);
	std::cout << std::endl;
	
	foo.beRepaired(5);
	std::cout << std::endl;

	ClapTrap bar = ClapTrap(foo);
	std::cout << std::endl;
	
	foo.takeDamage(8);
	std::cout << std::endl;

	foo.beRepaired(10);
	std::cout << std::endl;

	foo.attack("Feur");
	std::cout << std::endl;

	foo.takeDamage(10);
	std::cout << std::endl;
	
	bar.attack("Lol");
	std::cout << std::endl;

	ClapTrap	fubar = foo;
	std::cout << std::endl;
	
	fubar.attack("Yo");
	std::cout << std::endl;

	return (0);
}