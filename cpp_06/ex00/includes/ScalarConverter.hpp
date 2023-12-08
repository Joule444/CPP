/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:33:00 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/08 16:34:59 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
	#define SCALARCONVERTER_HPP

#include "color.h"
#include <iostream>
#include <sstream>
#include <string>
# include <iomanip>
# include <cmath>
# include <limits.h>
# include <float.h>

class ScalarConverter
{
	private:

		ScalarConverter( void );
	
	public:

		~ScalarConverter( void );
		ScalarConverter( const ScalarConverter &copy );
	
		ScalarConverter &operator=( const ScalarConverter &rhs );

		static int	convert( std::string input );

		static bool	isChar( std::string str );
		static bool	isInt( std::string str );
		static bool	isFloat( std::string str );
		static bool	isDouble( std::string str );
		static bool	isLiteral( std::string str );
		
};

#endif