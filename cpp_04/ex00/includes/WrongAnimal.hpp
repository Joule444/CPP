/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:01:15 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 18:28:10 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
	#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:

		//Constructors & Destructors
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal( const WrongAnimal &copy );
		
		//Operators Overload
		WrongAnimal &operator=( const WrongAnimal &rhs );

		//Members Functions
		std::string	getType( void ) const;
		void	makeSound( void ) const;

	protected:

		std::string	type;
	
	private:
};

#endif