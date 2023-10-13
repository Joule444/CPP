/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:30:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/13 15:34:12 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public :
	
		Fixed( void );
		Fixed( const int value );
		Fixed( const float value );
		~Fixed( void );
		Fixed( const Fixed &copy );
		
		Fixed &operator=( const Fixed &rhs );
		Fixed operator+( const Fixed &rhs ) const;
		Fixed operator-( const Fixed &rhs ) const;
		Fixed operator*( const Fixed &rhs ) const;
		Fixed operator/( const Fixed &rhs ) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator>(const Fixed &rhs) const;
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

		static Fixed	&min( Fixed &a, Fixed &b );
		static const Fixed	&min( const Fixed &a, const Fixed &b );
		static Fixed	&max( Fixed &a, Fixed &b );
		static const Fixed	&max( const Fixed &a, const Fixed &b );

	private :

		int					_value;
		static const int	_fract_part = 8;
};

std::ostream &operator << ( std::ostream &out, const Fixed &f );

#endif