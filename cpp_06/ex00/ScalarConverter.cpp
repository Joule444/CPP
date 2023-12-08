/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:32:26 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/08 15:29:38 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ScalarConverter.hpp"

/* Other Functions */

int	countPoints( std::string str )
{
	int	count = 0;
	for (size_t i = 0; (i = str.find('.', i)) != std::string::npos; i++)
	{
		count++;
	}
	return (count);
}

/* Members Functions */

bool	ScalarConverter::isFloat( std::string input )
{
	std::string	tmp = input;
	int			dec = 0;
	
	// Verifie si input est un float
	if (tmp.substr(tmp.size() - 1) == "f" && tmp.find(".") != std::string::npos)
	{
		input = input.substr(0, input.size() - 1);
		dec = input.substr(input.find(".")).size();
		if (dec > 6)
			dec = 6;
	}
	else
		return (false);

	std::istringstream	iss(input);
	float				i;
	
	if (iss >> i && iss.eof())
	{
		// Display char
		if (static_cast<int>(i) > 31 && static_cast<int>(i) < 127)
			std::cout << "char : " << static_cast<char>(i) << std::endl;
		else if ((static_cast<int>(i) > -1 && static_cast<int>(i) < 32) || static_cast<int>(i) == 127) 
			std::cout << "char : non displayable" << std::endl;
		else
			std::cout << "char : impossible" << std::endl;
		
		// Display int
		if (static_cast<int>(i) > INT_MAX || static_cast<int>(i) < INT_MIN)
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " << static_cast<int>(i) << std::endl;
		
		// Display float
		std::cout << "float : " << std::fixed << std::setprecision(dec) << i << "f" << std::endl;
		
		// Display double
		std::cout << "double : " << std::fixed << std::setprecision(dec) << static_cast<double>(i) << std::endl;

		return (true);
	}
	else if ((i < FLT_MAX || i > -FLT_MAX) && input.find_first_not_of("0123456789.") == std::string::npos && countPoints(input) == 1)
	{
		std::cout << "overflow" << std::endl;
		return (true);
	}
	else
		return (false);
}

bool	ScalarConverter::isChar( std::string input )
{
	std::istringstream	iss(input);
	float				i;

	if (!(iss >> i && iss.eof()) && input.length() == 1)
	{
		char	c;
		std::istringstream	oss(input);
		oss >> c;
		
		// Display char
		std::cout << "char : " << c << std::endl;
		
		// Display int
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		
		// Display float
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		
		// Display double
		std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
	
		return (true);
	}
	else
		return (false);
}

bool	ScalarConverter::isInt( std::string input )
{
	std::istringstream	iss(input);
	int					i;

	if (iss >> i)
	{
		// Display char
		if (static_cast<int>(i) > 31 && static_cast<int>(i) < 127)
			std::cout << "char : " << static_cast<char>(i) << std::endl;
		else if ((static_cast<int>(i) > -1 && static_cast<int>(i) < 32) || static_cast<int>(i) == 127)
			std::cout << "char : non displayable" << std::endl;
		else
			std::cout << "char : impossible" << std::endl;
		
		// Display int
		std::cout << "int : " << i << std::endl;

		// Display float
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		
		// Display double
		std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
		
		return (true);
	}
	else if ((i >= 2147483647 || i <= -2147483648))
	{
		std::cout << "overflow" << std::endl;
		return (true);
	}
	else
		return (false);
}

int ScalarConverter::convert( std::string input )
{
	if (isChar(input))
		return (0);
	if (isInt(input))
		return (0);
	return (0);
}

/* Overload Operators */

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &rhs )
{
	(void) rhs;
	return (*this);
}

/* Constr & Destr */

ScalarConverter::ScalarConverter( const ScalarConverter &copy )
{
	*this = copy;
	std::cout << DARK_WHITE
		<< "ScalarConverter : Copy constructor called"
		<< RESET << std::endl;
}

ScalarConverter::~ScalarConverter( void )
{
	std::cout << DARK_WHITE
		<< "ScalarConverter : Destructor called"
		<< RESET << std::endl;
}

ScalarConverter::ScalarConverter( void )
{
	std::cout << DARK_WHITE
		<< "ScalarConverter : Constructor called"
		<< RESET << std::endl;
}