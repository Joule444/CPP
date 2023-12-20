/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:33:16 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/20 17:36:10 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RPN.hpp"

/* Tools Functions */

bool	isOperand( char c )
{
	std::string	operand = "+-*/";
	
	if (operand.find(c) == std::string::npos)
		return (false);
	return (true);
}

/* Exceptions */

const char * RPN::BadArgsException::what() const throw()
{
	return ("Bad arguments");
}

/* Members Functions */

void	RPN::printStack( void ) const
{
    std::cout << "Stack Content : ";
    
    // Crée une copie temporaire de la pile pour éviter de la modifier
    std::stack<int> tempStack = _stack;

    // Affiche les éléments de la pile jusqu'à ce qu'elle soit vide
    while (!tempStack.empty())
    {
        std::cout << "[" << tempStack.top() << "] ";
        tempStack.pop();
    }

    std::cout << std::endl;
}

int	RPN::doRPN( void )
{
	std::istringstream	iss(_expression);
	std::string			word;

	while (iss >> word)
	{
		if (std::isdigit(word[0]))
		{
			int	nb = word[0] - '0';
			this->_stack.push(nb);
		}
		// if (isOperand(word[0]))
		// {
		// 	_stack.
		// }
	}
	this->printStack();

	return (0);
}

void	RPN::parseExpr( void ) const
{
	std::istringstream	iss(_expression);
	int	nb;
	
	if (!((iss >> nb && nb >= 0 && nb <= 9) && (iss >> nb && nb >= 0 && nb <= 9)))
		throw (RPN::BadArgsException());
	
	int	countNum = 2, countOp = 0;
	std::string	word;
	
	while (iss >> word)
	{
		if (word.length() != 1)
			throw (RPN::BadArgsException());
		if (!(std::isdigit(word[0])) && !isOperand(word[0]))
			throw (RPN::BadArgsException());

		if (std::isdigit(word[0]))
			countNum++;
		else if (isOperand(word[0]))
			countOp++;
	}

	if (countNum != countOp + 1)
		throw (RPN::BadArgsException());
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