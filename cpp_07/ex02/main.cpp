/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:07:22 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/11 15:55:23 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Array.hpp"

int	main( void )
{
	{
		std::cout << BOLD_YELLOW << "TESTS AVEC INT" << RESET << std::endl;
		
		size_t	len = 10;
		Array<int>	arr(len);

		for (size_t i = 0; i < len; i++)
		{
			std::cout << "[" << CYAN << arr[i] << RESET << "]" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << BOLD_YELLOW << "TESTS AVEC CHAR" << RESET << std::endl;
		
		size_t	len = 10;
		Array<char>	arr(len);

		for (size_t i = 0; i < len; i++)
		{
			std::cout << "[" << CYAN << arr[i] << RESET << "]" << std::endl;
		}
	}
	
	return (0);
}