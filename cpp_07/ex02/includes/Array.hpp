/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:44:24 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/11 15:43:43 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
	#define ARRAY_HPP

#include <iostream>
#include "color.h"

/* Class */

template < typename T >
class Array
{
	private:
	
		T * 	_arr;
		size_t	_size;
		
	public:
	
		Array<T>( void );
		Array<T>( unsigned int n );
		~Array<T>( void );
		Array<T>( const Array & copy );

		Array & operator=( const Array & assign );
		T & operator[]( unsigned int index ) const;

		size_t	size( void ) const;
};

/* Members Functions */

template < typename T >
size_t	Array<T>::size( void ) const
{
	return (this->size);
}

/* Operators Overloads */

template < typename T >
T & Array<T>::operator[]( unsigned int index ) const
{
	
}

template < typename T >
Array<T> & Array<T>::operator=( const Array<T> & assign )
{
	if (this->_size != 0)
		delete[] this->_arr;
	this->_size = assign._size;
	this->_arr = new T[this->size()]();
	for (size_t i = 0; i < this->size(); i++)
	{
		this->_arr[i] = assign._arr[i];
	}
	return (*this);
}

/* Constr & Destr */

template < typename T >
Array<T>::Array( const Array<T> & copy ): _size(copy._size)
{
	this->_arr = new T[copy._size]();
	for (size_t i = 0; i < this->size(); i++)
	{
		this->_arr[i] = copy._arr[i];
	}
	std::cout << DARK_WHITE << "Array : Copy Constructor Called" << END;
}

template < typename T >
Array<T>::~Array( void )
{
	std::cout << DARK_WHITE << "Array : Destructor Called" << END;
}

template < typename T >
Array<T>::Array( unsigned int n ): _size(n)
{
	this->_arr = new T[n]();
	std::cout << DARK_WHITE << "Array : Param Constructor Called" << END;
}

template < typename T >
Array<T>::Array( void ): _arr(NULL), _size(0)
{
	std::cout << DARK_WHITE << "Array : Default Constructor Called" << END;
}

#endif