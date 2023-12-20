/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:19:27 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/20 15:34:10 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
	#define RPN_HPP

#include <iostream>
#include <stack>

#include "color.h"

class RPN
{
	private:

		std::stack<int> _stack;

	public:
	
		RPN( void );
		~RPN( void );
		RPN( const RPN & copy );

		RPN & operator = ( const RPN & assign );
};

#endif