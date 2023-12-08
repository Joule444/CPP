/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:41:31 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/08 19:57:55 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"

int	main( void )
{
	Data	foo;
	uintptr_t	i;

	foo.nb = 42;
	
	i = Serializer::serialize(&foo);
	
	Data* bar = Serializer::deserialize(i);
	
	std::cout << "foo = " << CYAN << &foo << RESET << std::endl;
	std::cout << "bar = " << CYAN << bar << RESET << std::endl;

	return (0);
}