/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:33:16 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/20 16:43:09 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RPN.hpp"

/* Members Functions */

void	RPN::parseExpr( void ) const
{
	std::istringstream	iss(_expression);
	int	nb;
	
	if (!((iss >> nb && nb >= 0 && nb <= 9) && (iss >> nb && nb >= 0 && nb <= 9)))
		throw (std::exception());
	
	int	countNum = 2;
	int	countOp = 0;
	std::string	opBase = "+-*/";
	std::string	word;
	
	while (iss >> word)
	{
		if (word.length() != 1)
			throw (std::exception());
		if (!(std::isdigit(word[0])) && opBase.find(word[0]) == std::string::npos)
			throw (std::exception());

		if (std::isdigit(word[0]))
			countNum++;
		else if (opBase.find(word[0]) != std::string::npos)
			countOp++;
	}

	if (countNum != countOp + 1)
		throw (std::exception());
		
	std::cout << GREEN << "Good !" << END;
}

/* Operators Overload */

RPN & RPN::operator=( const RPN & assign )
{
	_stack = assign._stack;
	std::cout << DARK_WHITE << "RPN : Assignment Operator" << END;
	return (*this);
}

/* Constr & Destr */

RPN::RPN( std::string expression ): _expression(expression)
{
	std::cout << DARK_WHITE << "RPN : String Constructor" << END;
}

RPN::RPN( const RPN & copy )
{
	_stack = copy._stack;
	std::cout << DARK_WHITE << "RPN : Copy Constructor" << END;
}

RPN::~RPN( void )
{
	std::cout << DARK_WHITE << "RPN : Destructor" << END;
}

RPN::RPN( void )
{
	std::cout << DARK_WHITE << "RPN : Void Constructor" << END;
}