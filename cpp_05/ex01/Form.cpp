/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:25:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/28 15:54:21 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Form.hpp"

/* Members Functions */

int	Form::getExecGrade( void ) const
{
	return (this->_execGrade);
}

int	Form::getSignGrade( void ) const
{
	return (this->_signGrade);
}

bool	Form::getSignedStatus( void ) const
{
	return (this->_isSigned);
}

const std::string	Form::getName( void ) const
{
	return (this->_name);
}	

/* Operators Overload */

std::ostream &operator<<(std::ostream &out, const Form &f)
{
	out << "Form " << BOLD_YELLOW << f.getName()
		<< RESET << ", signed status " << BOLD_WHITE
		<< f.getSignedStatus() << RESET << ", grade to sign "
		<< BOLD_BLUE << f.getSignGrade() << RESET
		<< ", grade to execute " << BOLD_BLUE
		<< f.getExecGrade() << RESET;
	return (out);
}

Form &Form::operator=( const Form &rhs )
{
	this->_isSigned = rhs.getSignedStatus();	
	std::cout << "Form : Copy Operator !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Form::Form( std::string name, bool isSigned, int signGrade, int execGrade ): _name(name), _isSigned(isSigned), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << DARK_WHITE << "Form : Infos Constructor !" << RESET << std::endl;
}

Form::Form( const Form &copy ): _name(copy.getName()), _isSigned(copy.getSignedStatus()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
	std::cout << DARK_WHITE << "Form : Copy Constructor !" << RESET << std::endl;
}

Form::~Form( void )
{
	std::cout << DARK_WHITE << "Form : Destructor !" << RESET << std::endl;
}

Form::Form( void ): _name("Unnamed"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << DARK_WHITE << "Form : Default Constructor !" << RESET << std::endl;
}