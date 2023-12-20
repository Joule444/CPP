/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:19:27 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/20 20:30:19 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
	#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>

#include "color.h"

class RPN
{
	private:

		RPN( void );
		
		std::stack<int> _stack;
		std::string		_expression;

	public:
	
		~RPN( void );
		RPN( const RPN & copy );
		RPN( std::string expression );

		RPN & operator=( const RPN & assign );

		void	parseExpr( void ) const;
		int		doRPN( void );
		void	printStack( void ) const;

		class BadArgsException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif