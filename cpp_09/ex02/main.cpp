/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:38 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 19:26:07 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"

int main( const int argc, const char **argv )
{
	PmergeMe	data;

	if (!(data.fillDeque(argc, argv)))
		return (std::cerr << DARK_RED << "Error : Bad arguments" << END, 1);
	
	if (!(data.fillVector(argc, argv)))
		return (std::cerr << DARK_RED << "Error : Bad arguments" << END, 1);
	
	return (0);
}