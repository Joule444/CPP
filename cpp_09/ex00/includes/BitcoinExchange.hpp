/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:31:25 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/19 17:56:18 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
	#define BITCOINEXCHANGE_HPP
	
#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>
#include "color.h"
	
class BitcoinExchange
{
	private:
		
		BitcoinExchange( void );

		std::map<std::string, float> _db;
		
	public:
	
		BitcoinExchange( std::string filename );
		BitcoinExchange( const BitcoinExchange & copy );
		~BitcoinExchange( void );

		BitcoinExchange & operator=( const BitcoinExchange & assign );
		
		float	getPrice( std::string date ) const;
};

#endif