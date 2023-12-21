/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:49:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 19:14:26 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME
	#define PMERGE_ME

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <deque>
#include <vector>
#include <algorithm>

#include "color.h"

class PmergeMe
{
	private:

		std::vector<int>	_vector;
		std::deque<int>		_deque;

	public:
	
		PmergeMe( void );
		~PmergeMe( void );
		PmergeMe( const PmergeMe & copy );

		PmergeMe & operator=( const PmergeMe & assign );

		bool	fillVector( const int argc, const char **argv );
		bool	fillDeque( const int argc, const char **argv );
};

#endif