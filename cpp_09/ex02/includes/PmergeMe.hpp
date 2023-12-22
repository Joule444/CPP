/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:49:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/22 16:59:31 by jthuysba         ###   ########.fr       */
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
#include "templates.hpp"

class PmergeMe
{
	private:

		std::vector<int>					_vector;
		std::deque<int>						_deque;
		std::deque<std::pair<int, int> >	_dequePairs;
		std::deque<int>						_sortedDeque;
		
		void	_pairDeque( void );
		void	_binaryInsertDeque( void );
		std::deque<std::pair<int, int> >::iterator _findInsertion( std::pair<int, int> pair );

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