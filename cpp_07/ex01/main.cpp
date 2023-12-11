/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:22:46 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/11 14:39:16 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/templates.hpp"

template< typename T>
void	printElem( T & elem )
{
	std::cout << "[" << CYAN << elem << RESET << "]" << std::endl;
}

int	main( void )
{
	std::cout << BOLD_YELLOW << "TEST AVEC INT" << RESET << std::endl;
	
	int		arr[] = {1, 2, 3, 4};
	size_t	size = 4;
	
	iter<int>(arr, size, printElem);

	std::cout << BOLD_YELLOW << "TEST AVEC CHAR" << RESET << std::endl;
	
	char		arr1[] = {'a', 'b', 'c', 'd'};
	size_t	size1 = 4;
	
	iter<char>(arr1, size1, printElem);

	return (0);
}