/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:19:15 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/17 12:28:46 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

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

class ClapTrap
{
	public:
	
		// Constructors & Destructors
		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap( const ClapTrap &copy );
		ClapTrap( std::string name );
		
		//Operators Overload
		ClapTrap &operator=( const ClapTrap &rhs );

		//Members Functions
		void	attack( const std::string &target );
		void	takeDamage (unsigned int amount );
		void	beRepaired( unsigned int amount );

	protected:
		
		std::string	_name;
		int			_hitPts;
		int			_energyPts;
		int			_attackDmg;

	private:
};

#endif