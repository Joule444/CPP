/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:05:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/20 11:48:37 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
	#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:

		//Constructors & Destructors
		Cat( void );
		~Cat( void );
		Cat( const Cat &copy );
		
		//Operators Overload
		Cat &operator=( const Cat &rhs );

		//Members Functions
		virtual void	makeSound( void ) const;
		Brain	&getBrain( void ) const;

	private:
	
		Brain	*_brain;
};

#endif