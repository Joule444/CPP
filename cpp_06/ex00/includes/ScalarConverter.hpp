/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:33:00 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/28 16:56:31 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
	#define SCALARCONVERTER_HPP

#include "color.h"
#include <iostream>

class ScalarConverter
{
	public:

		~ScalarConverter( void );
		ScalarConverter( const ScalarConverter &copy );
	
		ScalarConverter &operator=( const ScalarConverter &rhs );

		static void	convert( std::string input );

		static void	printChar( std::string str );
		static void	printInt( std::string str );
		static void	printFloat( std::string str );
		static void	printDouble( std::string str );
		
	private:
	
		ScalarConverter( void );

		// bool	_check
};

#endif