/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:17:17 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/17 12:36:29 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
	#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		
		//Constructors & Destructors
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( const ScavTrap &copy );
		ScavTrap( std::string name );

		//Operators Overload
		ScavTrap &operator=( const ScavTrap &rhs );

		//Members Fucntions
		void	attack( const std::string &target );
		void	guardGate( void );
		
	private:
};

#endif