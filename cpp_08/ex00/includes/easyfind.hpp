/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:40:51 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/14 14:50:18 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
	#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include "color.h"

template< typename T >
typename T::iterator	easyfind( T & container, int value )
{
	typename T::iterator	it;
	
	it = find(container.begin(), container.end(), value);
	if (it == container.end())
	{
		throw (std::exception());
	}
	return (it);
}

#endif