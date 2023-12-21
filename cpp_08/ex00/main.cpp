/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:06:10 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 12:26:06 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/easyfind.hpp"

int	main( void )
{
	{
		std::cout << BOLD_YELLOW << "VECTOR TEST" << std::endl << END;

		std::vector<int>			v(42, 100);
		std::vector<int>::iterator	it;
		
		try
		{
			it = easyfind(v, 444);
			std::cout << "Value find at position [" << CYAN << std::distance(v.begin(), it) << RESET << "] of the container" << END;
		}
		catch (const std::exception & e)
		{
			std::cerr << DARK_RED << "Error : " << e.what() << END;
		}
	}

	std::cout << std::endl;

	{
		std::cout << BOLD_YELLOW << "LIST TEST" << std::endl << END;

		std::list<int>				lst;
		std::list<int>::iterator	it;
	
		lst.push_back(0);
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);

		try
		{
			it = easyfind(lst, 3);
			std::cout << "Value find at position [" << CYAN << std::distance(lst.begin(), it) << RESET << "] of the container" << END;
		}
		catch (const std::exception & e)
		{
			std::cerr << DARK_RED << "Error : " << e.what() << END;
		}
	}
	
	return (0);
}