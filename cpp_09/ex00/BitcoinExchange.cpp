/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:44:01 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/18 23:28:55 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/BitcoinExchange.hpp"

/* Constr & Destr */

BitcoinExchange::~BitcoinExchange( void )
{
	std::cout << DARK_WHITE << "BitcoinExchange : Destructor" << END;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & copy )
{
	//WIP
	(void) copy;
	std::cout << DARK_WHITE << "BitcoinExchange : Copy Constructor" << END;
}

BitcoinExchange::BitcoinExchange( std::string filename )
{
	std::ifstream	file(filename.c_str());
	
	if (!file.is_open())
		std::cerr << DARK_RED << "Error : Cannot open " << filename << END;

	std::string	line;
	while (std::getline(file, line))
	{
		std::istringstream	ss(line);
		std::string				date;
		std::string				xrate;
		double					num;

		if (line == "date,exchange_rate")
			continue;
		else if (std::getline(ss, date, ',') && ss >> num)
			_db[date] = num;
		else
			std::cerr << DARK_RED << "Error : Wrong line format" << END;
	}
	file.close();

	std::cout << _db["2022-03-29"] << END;
}

BitcoinExchange::BitcoinExchange( void )
{
}