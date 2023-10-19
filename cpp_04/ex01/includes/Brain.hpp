/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:36:24 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 18:39:39 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
	#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		
		//Constructors & Destructors
		Brain( void );
		~Brain( void );
		Brain( const Brain &copy );
		
		//Operators Overload
		Brain &operator=( const Brain &rhs );
	
	private:
	
		std::string	_ideas[100];
};

#endif