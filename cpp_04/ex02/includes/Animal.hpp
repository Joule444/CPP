/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:01:15 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/20 16:22:22 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
	#define ANIMAL_HPP

//Colors

# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"
# define RESET "\x1B[0m"

#include <iostream>

class Animal
{
	public:

		//Constructors & Destructors
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal &copy );
		
		//Operators Overload
		Animal &operator=( const Animal &rhs );

		//Members Functions
		std::string	getType( void ) const;
		virtual void	makeSound( void ) const = 0;

	protected:

		std::string	type;
	
	private:
};

#endif