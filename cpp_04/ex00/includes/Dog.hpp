/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:05:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 16:07:09 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public:

		// Constructors & Destructors
		Dog( void );
		~Dog( void );
		Dog( const Dog &copy );
		
		//Operators Overload
		Dog &operator=( const Dog &rhs );
	
	private:
};

#endif