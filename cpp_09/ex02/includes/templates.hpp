/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:31:30 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 19:32:19 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
	#define TEMPLATES_HPP

template < typename T >
void	printContainer( T & container )
{
    typename T::iterator	it = container.begin();
	typename T::iterator	ite = container.end();

	for (; it != ite; ++it)
    {
        std::cout << "[" << *it << "] ";
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
		typename T::const_iterator	next = it + 1;
		typename T::const_iterator	search = find(next, ite, *it);
		if (search != ite)
		{
			return (false);
		}
	}
	return (true);
}

#endif