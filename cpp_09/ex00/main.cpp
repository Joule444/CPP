/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:55:48 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/19 18:04:18 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/BitcoinExchange.hpp"

bool	isLeapYear( int year )
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return (true);
			else
				return (false);
		}
		else
			return (true);
	}
	else
		return (false);
}

bool	checkDate( std::string date )
{
	std::istringstream	ss(date);
	int	day, month, year;
	
	if (ss >> year && ss.get() == '-' && ss >> month && ss.get() == '-' && ss >> day && ss.eof())
	{
		if (month >= 1 && month <= 12)
		{
			if (month == 2)
			{
				if (!(day >= 1 && day <= (isLeapYear(year) ? 29 : 28)))
					return (false);
				return (true);
			}
			else if ((month <= 7 && month % 2 != 0) || (month >= 8 && month % 2 == 0))
			{
				if (!(day >= 1 && day <= 31))
					return (false);
				return (true);
			}
			else
			{
				if (!(day >= 1 && day <= 30))
					return (false);
				return (true);
			}
		}
		else
			return (false);
	}
	return (false);
}

bool	checkValue( float value )
{
	if (value < 0 || value >= 2147483648)
		return (false);
	return (true);
}

int	main ( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr << DARK_RED << "Error : Bad arguments" << END;
		return (1);
	}
	
	BitcoinExchange		data("data.csv");
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
		float					value;
		
		if (line == "date | value")
			continue;
		else if (std::getline(ss, date, '|') && ss >> value)
		{
			date.erase(10, 1); // Supprime l'espace
			
			if (!checkDate(date))
			{
				std::cerr << DARK_RED << "Error : Invalid date : " << date << END;
				return (1);
			}
			if (!checkValue(value))
			{
				std::cerr << DARK_RED << "Error : Invalid value : " << value << END;
				return (false);
			}
			
			std::cout << date << " => " << value << " = " << data.getPrice(date) * value << std::endl;
		}
		else
		{
			std::cerr << DARK_RED << "Error : Invalid line : " << line << END;
			return (1);
		}
	}
	
	return (0);
}