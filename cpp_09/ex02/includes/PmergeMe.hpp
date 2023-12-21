/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:49:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 17:13:40 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME
	#define PMERGE_ME

#include <iostream>

#include "color.h"

class PmergeMe
{
	private:


	public:
	
		PmergeMe( void );
		~PmergeMe( void );
		PmergeMe( const PmergeMe & copy );

		PmergeMe & operator=( const PmergeMe & assign );

		bool parseInput( int argc, char **argv ) const;
};

#endif