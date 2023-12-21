/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:38 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 17:16:58 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"

int main( int argc, char **argv )
{
	PmergeMe	foo;

	if (!(foo.parseInput(argc, argv)))
	{
		std::cerr << DARK_RED << "Error : Bad arguments" << END;
		return (1);
	}
	return (0);
}