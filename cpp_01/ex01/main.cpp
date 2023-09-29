/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:55:29 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 13:17:34 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	int		N = 15;
	Zombie	*horde;

	horde = zombieHorde(N, "Foo");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}
