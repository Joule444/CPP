/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:01:59 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/29 14:10:02 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
	#define BUREAUCRAT_HPP

#include <iostream>
#include "color.h"

class AForm;

class Bureaucrat
{
	public:
	
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat( const Bureaucrat &copy );
		Bureaucrat( std::string const name, int grade );
	
		Bureaucrat &operator=( const Bureaucrat &rhs );
	
		std::string getName( void ) const;
		int			getGrade( void ) const;
		void			incrementGrade( void );
		void			decrementGrade( void );
		void			signForm( AForm & f );

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too high !");
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too low !");
				}
		};
	
	private:
	
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif