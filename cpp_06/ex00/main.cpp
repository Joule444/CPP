/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:51:43 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/08 16:34:55 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ScalarConverter.hpp"

int	main( int argc, char ** argv )
{
	if (argc != 2)
	{
		std::cerr << DARK_RED << "Error: convert takes 1 argument"
			<< RESET << std::endl;
		return (1);
	}
	
	std::string	input = argv[1];
	
	return (ScalarConverter::convert(input));
}