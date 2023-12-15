/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:49:29 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/15 15:59:24 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
	#define SPAN_HPP
	
# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <limits.h>
# include "color.h"

class	Span
{
	private :
	
		unsigned int 	_n;
		std::list<int>	_span;
	
	public :
			
		Span( void );
		Span( unsigned int N );
		~Span( void );
		Span( const Span & copy );

		Span & operator=( const Span & rhs );
				
		void				addNumber( int nb );
		void				addRange( std::list<int>::iterator start, std::list<int>::iterator end );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );
	
	class TooManyNumbers : public std::exception
	{
		public :

			virtual const char* what() const throw()
			{
				return ("Too many numbers");
			}
	};

	class NotEnoughNumbers : public std::exception
	{
		public :

			virtual const char* what() const throw()
			{
				return ("Not enough numbers");
			}
	};
};
	
#endif