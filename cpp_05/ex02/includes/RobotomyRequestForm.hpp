/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:13:21 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 21:30:40 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
	#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	public:
	
		RobotomyRequestForm( void );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm &copy );
		RobotomyRequestForm( std::string target );
	
		RobotomyRequestForm &operator=( const RobotomyRequestForm &rhs );

		const std::string getTarget( void ) const;
		virtual void		beExecuted( Bureaucrat const & executor ) const;
		
	private:

		const std::string	_target;
};

#endif