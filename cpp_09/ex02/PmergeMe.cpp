/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:08:31 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 19:16:30 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"

/* Tools Functions */

template < typename T >
void	printContainer( T & container )
{
    std::cout << "Contenu du conteneur : ";

    typename T::iterator	it = container.begin();
	typename T::iterator	ite = container.end();

	for (; it != ite; ++it)
    {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
}

template < typename T >
bool	checkDuplicate( const T & container )
{
	typename T::const_iterator	it = container.begin();
	typename T::const_iterator	ite = container.end();

	for (; it != ite; it++)
	{
		typename T::const_iterator	next = it;
		next++;
		typename T::const_iterator	search = find(next, ite, *it);
		if (search != ite)
		{
			return (false);
		}
	}
	return (true);
}

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