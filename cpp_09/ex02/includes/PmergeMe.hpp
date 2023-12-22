/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:49:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/22 17:48:58 by jthuysba         ###   ########.fr       */
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
#include <time.h>
#include <sys/time.h>

#include "color.h"
#include "templates.hpp"

class PmergeMe
{
	private:

		std::vector<int>					_vector;
		std::vector<std::pair<int, int> >	_vectorPairs;
		std::vector<int>					_sortedVector;
		std::deque<int>						_deque;
		std::deque<std::pair<int, int> >	_dequePairs;
		std::deque<int>						_sortedDeque;
		timeval								_startT;
		timeval								_endT;
		
		void	_pairDeque( void );
		void	_binaryInsertDeque( void );
		std::deque<std::pair<int, int> >::iterator _findInsertionDeque( std::pair<int, int> pair );
		void	_pairVector( void );
		void	_binaryInsertVector( void );
		std::vector<std::pair<int, int> >::iterator _findInsertionVector( std::pair<int, int> pair );


	public:
	
		PmergeMe( void );
		~PmergeMe( void );
		PmergeMe( const PmergeMe & copy );

		PmergeMe & operator=( const PmergeMe & assign );

		bool	fillVector( const int argc, const char **argv );
		bool	fillDeque( const int argc, const char **argv );
		void	sortVector( void );
		void	sortDeque( void );
};

#endif