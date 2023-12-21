/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:08:31 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 19:32:54 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"

/* Tools Functions */



/* Members Functions */

bool	PmergeMe::fillDeque( const int argc, const char **argv )
{
	if (argc < 2)
		return (false);
	
	for (int i = 1; i < argc; i++)
	{
		std::istringstream	iss(argv[i]);
		int	value;
		
		if (!(iss >> value && iss.eof() && value >= 0))
		{
			return (false);
		}
		_deque.push_back(value);
	}

	if (!checkDuplicate(_deque))
	{
		return (false);
	}
	
	std::cout << "Deque : ";
	printContainer(_deque);
	return (true);
}

bool	PmergeMe::fillVector( const int argc, const char **argv )
{
	if (argc < 2)
		return (false);
	
	for (int i = 1; i < argc; i++)
	{
		std::istringstream	iss(argv[i]);
		int	value;
		
		if (!(iss >> value && iss.eof() && value >= 0))
		{
			return (false);
		}
		
		_vector.push_back(value);
	}
	
	std::cout << "Vector : ";
	printContainer(_vector);
	return (true);
}

/* Operators Overloads */

PmergeMe & PmergeMe::operator=( const PmergeMe & assign )
{
	(void) assign;
	std::cout << DARK_WHITE << "PmergeMe : Assignment Operator" << END;
	return (*this);
}

/* Constr & Destr */

PmergeMe::PmergeMe( const PmergeMe & copy )
{
	(void) copy;
	std::cout << DARK_WHITE << "PmergeMe : Copy Constructor" << END;
}

PmergeMe::~PmergeMe( void )
{
	std::cout << DARK_WHITE << "PmergeMe : Destructor" << END;
}

PmergeMe::PmergeMe( void )
{
	std::cout << DARK_WHITE << "PmergeMe : Default Constructor" << END;
}