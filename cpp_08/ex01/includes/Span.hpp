/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:49:29 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/14 16:33:38 by jthuysba         ###   ########.fr       */
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
	public :
			
		Span( void );
		Span( unsigned int N );
		~Span( void );
		Span( const Span & copy );

		Span & operator=( const Span & rhs );
				
		void	addNumber( int nb );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );		
		
	private :
	
		unsigned int 	_n;
		std::list<int>	_span;
		
};
	
#endif