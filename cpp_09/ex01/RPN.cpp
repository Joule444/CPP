/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:33:16 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/20 15:39:41 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RPN.hpp"

/* Operators Overload */

RPN & RPN::operator=( const RPN & assign )
{
	_stack = assign._stack;
	return (*this);
}

/* Constr & Destr */

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