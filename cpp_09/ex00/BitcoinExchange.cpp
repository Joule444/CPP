/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:44:01 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/19 18:03:23 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/BitcoinExchange.hpp"

/* Members Functions */

float	BitcoinExchange::getPrice( std::string date ) const
{
	return (this->_db.lower_bound(date)->second);
}

/* Operators Overload */

//WIP

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
		float					num;

		if (line == "date,exchange_rate")
			continue;
		else if (std::getline(ss, date, ',') && ss >> num)
			_db[date] = num;
		else
			std::cerr << DARK_RED << "Error : Wrong line format" << END;
	}
	file.close();
}

BitcoinExchange::BitcoinExchange( void )
{
}