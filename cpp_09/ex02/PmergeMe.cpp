/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:08:31 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/22 17:22:50 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"

/* Tools Functions */

template < typename T >
typename T::iterator	binarySearch( T & container, int value )
{
	typename T::iterator it = container.begin();
    typename T::iterator ite = container.end();

    while (it < ite)
    {
        typename T::iterator mid = it + (std::distance(it, ite) / 2);

        if (*mid < value)
        {
            it = mid + 1;
        }
        else
        {
            ite = mid;
        }
    }

    return (it);
}

std::deque<std::pair<int, int> >::iterator	PmergeMe::_findInsertion( std::pair<int, int> pair )
{
	std::deque<std::pair<int, int> >::iterator	it = _dequePairs.begin();
	std::deque<std::pair<int, int> >::iterator	ite = _dequePairs.end();

	for (; it != ite; it++)
	{
		if ((*it).first > pair.first)
			return (it);
	}
	return (ite);
}

/* Members Functions */

void	PmergeMe::_binaryInsertDeque( void )
{
	std::deque<std::pair<int, int> >::iterator	it = _dequePairs.begin();
	std::deque<std::pair<int, int> >::iterator	ite = _dequePairs.end();
	
	for (; it != ite; it++)
	{
		_sortedDeque.push_back((*it).first);
	}

	it = _dequePairs.begin();
	ite = _dequePairs.end();

	for (; it != ite; it++)
	{
		_sortedDeque.insert(binarySearch(_sortedDeque, (*it).second), (*it).second);
	}
	if (_deque.size() % 2 != 0)
		_sortedDeque.insert(binarySearch(_sortedDeque, _deque.back()), _deque.back());
}

void	PmergeMe::_pairDeque( void )
{
	for (size_t i = 0; i < _deque.size(); i++)
	{
		if (i + 1 < _deque.size())
		{
			std::pair<int, int>	pair;
		
			pair.first = _deque[i] < _deque[i + 1] ? _deque[i] : _deque[i + 1];
			pair.second = _deque[i] < _deque[i + 1] ? _deque[i + 1] : _deque[i];
			
			_dequePairs.insert(_findInsertion(pair), pair);
				
			i++;
		}
	}
	std::cout << END;
}

void	PmergeMe::sortDeque( void )
{
	std::cout << "\nUnsorted : ";
	printContainer(_deque);
	_pairDeque();
	_binaryInsertDeque();
	std::cout << "Sorted : ";
	printContainer(_sortedDeque);
	std::cout << std::endl;
}

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