/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:32:26 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/28 17:05:56 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ScalarConverter.hpp"

/* Members Functions */

void	ScalarConverter::printChar( std::string input )
{
	
}

void ScalarConverter::convert( std::string input )
{
	printChar(input);
	printInt(input);
	printFloat(input);
	printDouble(input);
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