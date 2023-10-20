/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:36:24 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/20 11:44:00 by jthuysba         ###   ########.fr       */
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

		//Members Functions
		std::string	getIdea( int id ) const;
		void		setIdea( int id, std::string idea );
	
		//Variables
		std::string	ideas[100];
	
	private:
	
};

#endif