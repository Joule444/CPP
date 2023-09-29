/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:55:29 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 14:47:12 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	foo = Zombie("Foo");
	Zombie	*bar = newZombie("Bar");
	
	foo.announce();
	bar->announce();
	randomChump("Fubar");
	delete bar;
	return (0);
}
