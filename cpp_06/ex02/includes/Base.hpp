/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:56:53 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/10 16:38:38 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
	#define BASE_HPP

#include <iostream>
#include <stdlib.h>
#include "color.h"

class Base
{
	public:

		virtual ~Base( void );

		static Base* generate( void );
		static void	identify( Base* p );
		static void	identify( Base& p );

};

#endif