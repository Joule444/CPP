/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:52:37 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/06 13:55:50 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy created !" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Fixed num destroyed !" << std::endl;
}

Fixed::Fixed( void )
{
	std::cout << "Fixed num created !" << std::endl;
}