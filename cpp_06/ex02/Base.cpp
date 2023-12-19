/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:12:25 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/19 13:01:22 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"

/* Members Functions */

void	Base::identify( Base & p )
{
	try
	{
		p = dynamic_cast<A &>(p);
		std::cout << "Type is " << RED << "A" << RESET  << " !" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		p = dynamic_cast<B &>(p);
		std::cout << "Type is " << BLUE << "B" << RESET  << " !" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		p = dynamic_cast<C &>(p);
		std::cout << "Type is " << GREEN << "C" << RESET  << " !" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

void	Base::identify( Base * p )
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type is " << RED << "A" << RESET  << " !" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type is " << BLUE << "B" << RESET << " !" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type is " << GREEN << "C" << RESET << " !" << std::endl;
	else
		std::cout << "Uknown type !" << std::endl;
}

Base* Base::generate( void )
{
	srand(time(0));
	switch (rand() % 3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (NULL);
	}
}

/* Constr & Destr */

Base::~Base( void )
{
	std::cout << DARK_WHITE
		<< "Base : Destructor called"
		<< RESET << std::endl;
}