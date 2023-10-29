/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:13:21 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/29 14:16:48 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
	#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
	
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm &copy );
	
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &rhs );

		// const std::string	getName( void ) const;
		// bool					getIsSigned( void ) const;
		// int					getSignGrade( void ) const;
		// int					getExecGrade( void ) const;
		// void					beSigned( Bureaucrat & b );
		// void					signIt( void );
		
		// class GradeTooHighException: public std::exception
		// {
		// 	public:
		// 		virtual const char *what() const throw()
		// 		{
		// 			return ("Grade too high !");
		// 		}
		// };
		
		// class GradeTooLowException: public std::exception
		// {
		// 	public:
		// 		virtual const char *what() const throw()
		// 		{
		// 			return ("Grade too low !");
		// 		}
		// };
		
	private:

		const std::string	_name;
		bool					_isSigned;
		const int			_signGrade;
		const	int			_execGrade;
};

std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif