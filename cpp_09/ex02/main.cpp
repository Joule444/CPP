/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:38 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 19:16:57 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"

int main( const int argc, const char **argv )
{
	PmergeMe	foo;

	if (!(foo.fillDeque(argc, argv)))
	{
		std::cerr << DARK_RED << "Error : Bad arguments" << END;
		return (1);
	}
	
	if (!(foo.fillVector(argc, argv)))
	{
		std::cerr << DARK_RED << "Error : Bad arguments" << END;
		return (1);
	}
	
	return (0);
}