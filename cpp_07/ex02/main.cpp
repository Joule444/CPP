/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:07:22 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/19 18:25:26 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Array.hpp"

int	main( void )
{
	{
		std::cout << BOLD_YELLOW << "TEST AVEC INT" << RESET << std::endl;
		
		size_t	len = 10;
		Array<int>	arr(len);

		arr[1] = 42;
		for (size_t i = 0; i < len; i++)
		{
			std::cout << "[" << CYAN << arr[i] << RESET << "]" << std::endl;
		}
	}
	
	std::cout << std::endl;
	
	{
		std::cout << BOLD_YELLOW << "TEST AVEC CHAR" << RESET << std::endl;
		
		size_t	len = 10;
		Array<char>	arr(len);

		arr[1] = 'a';
		for (size_t i = 0; i < len; i++)
		{
			std::cout << "[" << CYAN << arr[i] << RESET << "]" << std::endl;
		}
	}
	
	std::cout << std::endl;
	
	{
		std::cout << BOLD_YELLOW << "TEST EXCEPTION" << RESET << std::endl;
		
		Array<char>	arr;

		try
		{
			std::cout << arr[5] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << DARK_RED << "Error: Requested index is out of bounds"
				<< RESET << '\n';
		}
	}
	
	return (0);
}