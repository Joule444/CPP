/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:00:31 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/08 19:55:53 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
	#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include "color.h"

struct Data
{
	int	nb;
};

class Serializer
{
	private:

		Serializer( void );
	
	public:

		~Serializer( void );
		Serializer( const Serializer &copy );
	
		Serializer &operator=( const Serializer &rhs );

		static uintptr_t	serialize( Data *ptr );
		static Data	*deserialize(uintptr_t raw);
};

#endif
