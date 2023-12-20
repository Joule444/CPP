/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:43:43 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/20 16:12:09 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RPN.hpp"

int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr << DARK_RED << "Error : Bad arguments" << END;
		return (1);
	}
		
	std::string	expression = argv[1];
	RPN data = RPN(expression);

	try
	{
		data.parseExpr();
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}