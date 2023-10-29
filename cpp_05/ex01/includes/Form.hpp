/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:04:28 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/29 11:46:28 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
	#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	public:
	
		Form( void );
		~Form( void );
		Form( const Form &copy );
		Form( std::string name, bool isSigned, int signGrade, int execGrade );
	
		Form &operator=( const Form &rhs );

		const std::string	getName( void ) const;
		bool					getSignedStatus( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void					beSigned( Bureaucrat & b );
		
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

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif