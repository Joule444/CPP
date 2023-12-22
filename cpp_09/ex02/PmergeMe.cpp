/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:08:31 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/22 17:55:45 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"

/* Members Functions */

std::deque<std::pair<int, int> >::iterator	PmergeMe::_findInsertionDeque( std::pair<int, int> pair )
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
			
			_dequePairs.insert(_findInsertionDeque(pair), pair);
				
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

	gettimeofday(&_endT, NULL);
	long long timeSpan = (_endT.tv_sec - _startT.tv_sec) * 1000000LL + (_endT.tv_usec - _startT.tv_usec);
	std::cout << "Time to sort using std::deque : " << timeSpan / 1000.0 << " us" << std::endl;
}

bool	PmergeMe::fillDeque( const int argc, const char **argv )
{	
	gettimeofday(&_startT, NULL);
	
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

void	PmergeMe::_binaryInsertVector( void )
{
	std::vector<std::pair<int, int> >::iterator	it = _vectorPairs.begin();
	std::vector<std::pair<int, int> >::iterator	ite = _vectorPairs.end();
	
	for (; it != ite; it++)
	{
		_sortedVector.push_back((*it).first);
	}

	it = _vectorPairs.begin();
	ite = _vectorPairs.end();

	for (; it != ite; it++)
	{
		_sortedVector.insert(binarySearch(_sortedVector, (*it).second), (*it).second);
	}
	if (_vector.size() % 2 != 0)
		_sortedVector.insert(binarySearch(_sortedVector, _vector.back()), _vector.back());
}

std::vector<std::pair<int, int> >::iterator	PmergeMe::_findInsertionVector( std::pair<int, int> pair )
{
	std::vector<std::pair<int, int> >::iterator	it = _vectorPairs.begin();
	std::vector<std::pair<int, int> >::iterator	ite = _vectorPairs.end();

	for (; it != ite; it++)
	{
		if ((*it).first > pair.first)
			return (it);
	}
	return (ite);
}

void	PmergeMe::_pairVector( void )
{
	for (size_t i = 0; i < _vector.size(); i++)
	{
		if (i + 1 < _vector.size())
		{
			std::pair<int, int>	pair;
		
			pair.first = _vector[i] < _vector[i + 1] ? _vector[i] : _vector[i + 1];
			pair.second = _vector[i] < _vector[i + 1] ? _vector[i + 1] : _vector[i];
			
			_vectorPairs.insert(_findInsertionVector(pair), pair);
				
			i++;
		}
	}
	std::cout << END;
}

void	PmergeMe::sortVector( void )
{
	_pairVector();
	_binaryInsertVector();

	// std::cout << "Sorted : ";
	// printContainer(_sortedDeque);
	// std::cout << std::endl;

	gettimeofday(&_endT, NULL);
	long long timeSpan = (_endT.tv_sec - _startT.tv_sec) * 1000000LL + (_endT.tv_usec - _startT.tv_usec);
	std::cout << "Time to sort using std::vector : " << timeSpan / 1000.0 << " us" << std::endl;
}

bool	PmergeMe::fillVector( const int argc, const char **argv )
{
	gettimeofday(&_startT, NULL);
	
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