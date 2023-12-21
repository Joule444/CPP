/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:11:14 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 13:02:13 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
	#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include "color.h"

template < typename T >
class MutantStack : public std::stack<T>
{
	public :

		MutantStack<T>( void );
		~MutantStack<T>( void );
		MutantStack<T>( const MutantStack<T> & copy );

		MutantStack<T> & operator=( const MutantStack<T> & assign );
		
		
};

template < typename T >
MutantStack<T>::~MutantStack( void )
{
	std::cout << DARK_WHITE << "MutantStack : Destructor called" << END;
}

template < typename T >
MutantStack<T>::MutantStack( void )
{
	std::cout << DARK_WHITE << "MutantStack : Constructor called" << END;
}

#endif