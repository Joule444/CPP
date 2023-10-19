/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:24:08 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/17 13:27:23 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		
		//Constructors & Destructors
		FragTrap( void );
		~FragTrap( void );
		FragTrap( const FragTrap &copy );
		FragTrap( std::string name );

		//Operators Overload
		FragTrap &operator=( const FragTrap &rhs );

		//Members Fucntions
		void	attack( const std::string &target );
		void	highFiveGuys( void );
		
	private:
};

#endif