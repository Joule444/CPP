/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:30:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/09 18:05:44 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	public :
	
		Fixed( void );
		Fixed( const int value );
		Fixed( const float value );
		~Fixed( void );
		Fixed( const Fixed &copy );
		Fixed &operator=( const Fixed &rhs );

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

	private :

		int	_value;
		static const int	_fract_part = 8;
};

#endif