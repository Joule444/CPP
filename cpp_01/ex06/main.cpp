/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:04:10 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/06 12:07:04 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << RED << "Error :" << RESET << " HarlFilter takes one argument :\n./HarlFilter " << CYAN << "<FilterLevel>" << std::endl;
		return (1);
	}
	
	Harl	Karen;
	std::string	Filter = argv[1];
	int	FilterLevel = Karen.getFilterLevel(Filter);
	
	switch (FilterLevel)
	{
		case 0:
			Karen.complain("DEBUG");
			// fall through
		case 1:
			Karen.complain("INFO");
			// fall through
		case 2:
			Karen.complain("WARNING");
			// fall through
		case 3:
			Karen.complain("ERROR");
			break ;
		default:
			Karen.complain("");
	}
	return (0);
}