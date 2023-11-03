/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:25:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 21:47:56 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Form.hpp"

/* Members Functions */

void	Form::signIt( void )
{
	this->_isSigned = true;
}

void	Form::beSigned( Bureaucrat & b )
{
	if (this->_isSigned == true)
	{
		std::cout << "Form \"" << BOLD_CYAN << this->_name
			<< RESET << "\" is already signed !" << std::endl;
		return ;
	}
	if (b.getGrade() > this->_signGrade)
		throw (Form::GradeTooLowException());
	this->_isSigned = true;
	std::cout << "Form \"" << BOLD_CYAN << this->_name
		<< RESET << "\" is signed by " << BOLD_YELLOW
		<< b.getName() << RESET << " !" << std::endl;
}

int	Form::getExecGrade( void ) const
{
	return (this->_execGrade);
}

int	Form::getSignGrade( void ) const
{
	return (this->_signGrade);
}

bool	Form::getIsSigned( void ) const
{
	return (this->_isSigned);
}

const std::string	Form::getName( void ) const
{
	return (this->_name);
}	

/* Operators Overload */

std::ostream &operator<<( std::ostream &out, const Form &f )
{
	out << "Form \"" << BOLD_CYAN << f.getName()
		<< RESET << "\", signed status " << BOLD_WHITE
		<< f.getIsSigned() << RESET << ", grade to sign "
		<< BOLD_BLUE << f.getSignGrade() << RESET
		<< ", grade to execute " << BOLD_BLUE
		<< f.getExecGrade() << RESET << " !";
	return (out);
}

Form &Form::operator=( const Form &rhs )
{
	this->_isSigned = rhs.getIsSigned();	
	std::cout << "Form : Copy Operator" << std::endl;
	return (*this);
}

/* Constr & Destr */

Form::Form( std::string name, int signGrade, int execGrade ): _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw (Form::GradeTooLowException());
	else if (signGrade < 1 || execGrade < 1)
		throw (Form::GradeTooHighException());
	std::cout << DARK_WHITE << "Form : Infos Constructor" << RESET << std::endl;
}

Form::Form( const Form &copy ): _name(copy.getName()), _isSigned(copy.getIsSigned()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
	std::cout << DARK_WHITE << "Form : Copy Constructor" << RESET << std::endl;
}

Form::~Form( void )
{
	std::cout << DARK_WHITE << "Form : Destructor" << RESET << std::endl;
}

Form::Form( void ): _name("Unnamed"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << DARK_WHITE << "Form : Default Constructor" << RESET << std::endl;
}