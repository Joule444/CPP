/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:04:28 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/29 14:06:19 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
	#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
	public:
	
		AForm( void );
		~AForm( void );
		AForm( const AForm &copy );
		AForm( std::string name, bool isSigned, int signGrade, int execGrade );
	
		AForm &operator=( const AForm &rhs );

		const std::string	getName( void ) const;
		bool					getIsSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void					beSigned( Bureaucrat & b );
		void					signIt( void );
		
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
		bool					_isSigned;
		const int			_signGrade;
		const	int			_execGrade;
};

std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif