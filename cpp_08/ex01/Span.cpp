/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:54:13 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 12:35:19 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

/* Members Functions */

unsigned int	Span::longestSpan( void )
{
	if (_span.size() <= 1)
		throw (Span::NotEnoughNumbers());
	return (_span.back() - _span.front());
}

unsigned int	Span::shortestSpan( void )
{
	if (_span.size() <= 1)
		throw (Span::NotEnoughNumbers());
	
	std::list<int>::iterator	it;
	std::list<int>::iterator	next;
	
	it = this->_span.begin();
	next = this->_span.begin();
	next++;

	int	span = *next - *it;
	
	for (; it != _span.end(); it++)
	{
		if (abs(*next - *it) < span)
			span = *next - *it;
		next++;
	}
	return (span);
}

void	Span::addRange( std::list<int>::iterator start, std::list<int>::iterator end )
{
	size_t	rangeSize = std::distance(start, end);
	if (_span.size() + rangeSize > _n)
		throw (Span::TooManyNumbers());
	_span.insert(_span.end(), start, end);
	_span.sort();
}

void	Span::addNumber( int nb )
{
	if (this->_span.size() >= this->_n)
		throw (Span::TooManyNumbers());
	this->_span.push_back(nb);
	this->_span.sort();
}

/* Operators Overloads */

Span & Span::operator=( const Span & rhs )
{
	_n = rhs._n;
	_span.assign(rhs._span.begin(), rhs._span.end());
	return (*this);
}

/* Constr & Destr */

Span::Span( const Span & copy ) : _n(copy._n)
{
	std::cout << DARK_WHITE << "Span : Copy Constructor Called" << END;
}

Span::~Span( void )
{
	std::cout << DARK_WHITE << "Span : Default Destructor Called" << END;
}

Span::Span( unsigned int n ) : _n(n)
{
	std::cout << DARK_WHITE << "Span : Args Constructor Called" << END;
}

Span::Span( void ) : _n(0)
{
	std::cout << DARK_WHITE << "Span : Default Constructor Called" << END;
}