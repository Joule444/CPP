/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:52:37 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/16 13:57:06 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

/* OVERLOAD FUNCTIONS */

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b )
{
	if (a > b)
		return (b);
	return (a);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b )
{
	if (a < b)
		return (b);
	return (a);
}

/* OPERATORS OVERLOAD */

Fixed	Fixed::operator++( int )
{
	// std::cout << "post incr used" << std::endl;
	Fixed	tmp = Fixed(*this);
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--( int )
{
	// std::cout << "post decr used" << std::endl;
	Fixed	tmp = Fixed(*this);
	++(*this);
	return (tmp);
}

Fixed	&Fixed::operator++( void )
{
	// std::cout << "pre incr used" << std::endl;
	++this->_value;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	// std::cout << "pre decr used" << std::endl;
	--this->_value;
	return (*this);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

Fixed Fixed::operator/( const Fixed &rhs ) const
{
	return Fixed((float)(this->toFloat() / rhs.toFloat()));
}

Fixed Fixed::operator*( const Fixed &rhs ) const
{
	return Fixed((float)(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator-( const Fixed &rhs ) const
{
	return Fixed((float)(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator+( const Fixed &rhs ) const
{
	return Fixed((float)(this->toFloat() + rhs.toFloat()));
}

Fixed & Fixed::operator=( const Fixed &rhs )
{
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<( std::ostream &out, const Fixed &f )
{
	out << f.toFloat();
	return (out);
}

/* MEMBER FUNCTIONS */

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_fract_part));
}

int	Fixed::toInt( void ) const
{
	return (this->_value >> this->_fract_part);
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

int	Fixed::getRawBits( void ) const
{
	return (this->_value);
}

/* CONSTRUCTOR & DESTRUCTOR */

Fixed::Fixed( const Fixed &copy )
{
	this->_value = copy.getRawBits();
}

Fixed::~Fixed( void )
{
}

Fixed::Fixed( const float value )
{
	this->_value = roundf((float)value * (1 << this->_fract_part));
}

Fixed::Fixed(const int i)
{
	this->_value = i << this->_fract_part;
}

Fixed::Fixed( void )
{
	this->_value = 0;
}