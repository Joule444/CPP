/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:27:43 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/11 12:36:31 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
	#define TEMPLATES_HPP

#include <iostream>

template< typename T >
T const & max( T const & a, T const & b )
{
	return (a >= b ? a : b);
}

template< typename T >
T const & min( T const & a, T const & b )
{
	return (a <= b ? a : b);
}

template< typename T >
void	swap( T & a, T & b )
{
	T	tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

#endif