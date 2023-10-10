/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:36:41 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/10 17:14:09 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

int	main( void )
{
	Fixed a;
	a = Fixed( 42 );
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.toInt() << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << c.toInt() << std::endl;

	return 0;
}
