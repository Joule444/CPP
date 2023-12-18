/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:55:48 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/19 00:23:50 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/BitcoinExchange.hpp"

int	main ( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr << DARK_RED << "Error : Bad arguments" << END;
		return (1);
	}
	
	BitcoinExchange	data("data.csv");
	std::ifstream		ifs(argv[1]);
	if (!ifs)
	{
		std::cout << DARK_RED << "Error : Cannot open input file" << END;
		return (1);
	}

	std::string			line;
	
	while (std::getline(ifs, line))
	{
		std::istringstream	ss(line);
		std::string				date;
		double					num;
		
		if (line == "date | value")
			continue;
		else if (std::getline(ss, date, '|') && ss >> num)
		{
			date.erase(10, 1); // Supprime l'espace
			
			// check date & num validity
		}
		else
			std::cerr << DARK_RED << "Error : Invalid line : " << line << END;
	}
	
	return (0);
}