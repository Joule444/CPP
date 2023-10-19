/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:05:36 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 18:25:16 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
	#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

		//Constructors & Destructors
		WrongCat( void );
		~WrongCat( void );
		WrongCat( const WrongCat &copy );
		
		//Operators Overload
		WrongCat &operator=( const WrongCat &rhs );

		//Members Functions
		virtual void	makeSound( void ) const;

	private:
};

#endif