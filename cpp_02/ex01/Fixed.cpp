/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:52:37 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/10 17:02:58 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

int	Fixed::toInt( void ) const
{
	return (this->_value >> this->_fract_part);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called !" << std::endl;
	this->_value = raw;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called !" << std::endl;
	return (this->_value);
}

Fixed & Fixed::operator=(const Fixed &rhs)
{
	this->_value = rhs.getRawBits();
	std::cout << "Copy assignement operator called !" << std::endl;
	return (*this);
}

Fixed::Fixed( const Fixed &copy )
{
	this->_value = copy.getRawBits();
	std::cout << "Copy created !" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Fixed num destroyed !" << std::endl;
}

Fixed::Fixed( const float value )
{
	this->_value = value;
	std::cout << "Fixed num created !" << std::endl;
}

Fixed::Fixed(const int i)
{
	this->_value = i << this->_fract_part;
	std::cout << "Fixed int constructor called" << std::endl;
}

Fixed::Fixed( void )
{
	this->_value = 0;
	std::cout << "Fixed float constructor called" << std::endl;
}