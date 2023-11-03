/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:01:59 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 22:54:07 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
	#define INTERN_HPP

#include "Bureaucrat.hpp"

class Intern
{
	public:
	
		Intern( void );
		~Intern( void );
		Intern( const Intern &copy );
	
		Intern &operator=( const Intern &rhs );
	
		AForm *makeForm( std::string name, std::string target );	

	private:
	
		std::string _formTypes[3];
};

#endif