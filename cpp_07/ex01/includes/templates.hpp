/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:40:27 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/20 09:50:13 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
	#define TEMPLATES_HPP

#include <iostream>
#include "color.h"

template< typename T >
void	iter( T * arr, size_t len, void (*f)( T &) )
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif