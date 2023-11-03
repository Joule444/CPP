/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:04:28 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 16:19:44 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
	#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
	public:
	
		AForm( void );
		virtual ~AForm( void );
		AForm( const AForm &copy );
		AForm( std::string name, int signGrade, int execGrade );
	
		AForm &operator=( const AForm &rhs );

		const std::string	getName( void ) const;
		bool					getIsSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void					beSigned( Bureaucrat & b );
		void					signIt( void );
		virtual void		execute( Bureaucrat const & executor ) const;
		virtual void		beExecuted( Bureaucrat const & executor ) const = 0;
		
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

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form not signed !");
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