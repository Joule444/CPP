/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:13:21 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 21:30:32 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
	#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
	
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm &copy );
		ShrubberyCreationForm( std::string target );
	
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &rhs );

		const std::string getTarget( void ) const;
		virtual void		beExecuted( Bureaucrat const & executor ) const;

	private:

		const std::string	_target;
};

#endif