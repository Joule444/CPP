/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:11:14 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 13:41:43 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
	#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include "color.h"

template < typename T >
class MutantStack : public std::stack<T>
{
	public :

		MutantStack<T>( void );
		~MutantStack<T>( void );
		MutantStack<T>( const MutantStack<T> & copy );

		MutantStack<T> & operator=( const MutantStack<T> & assign );
		
		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin( void );
		iterator	end( void );
};

/* Members Functions */

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

/* Operators Overloads */

template < typename T >
MutantStack<T> & MutantStack<T>::operator=( const MutantStack<T> & assign )
{
	if (this != &assign)
		MutantStack<T>::stack::operator=(assign);
	std::cout << DARK_WHITE << "MutantStack : Assign Operator called" << END;
}

/* Constr & Destr */

template < typename T >
MutantStack<T>::MutantStack( const MutantStack<T> & copy ): std::stack<T>(copy)
{
	std::cout << DARK_WHITE << "MutantStack : Copy Constructor called" << END;
}

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