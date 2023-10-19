/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:01:15 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 16:05:17 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
	#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:

		// Constructors & Destructors
		Animal( void );
		~Animal( void );
		Animal( const Animal &copy );
		
		//Operators Overload
		Animal &operator=( const Animal &rhs );

	protected:

		std::string	type;
	
	private:
};

#endif