/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/29 14:10:25 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"

/* Members Functions */

void	Bureaucrat::signForm( AForm & f )
{
	if (f.getIsSigned() == true)
	{
		std::cout << BOLD_YELLOW << this->_name << RESET
			<< " couldn't sign form \"" << BOLD_CYAN
			<< f.getName() << RESET << "\" because it's already signed !"
			<< std::endl;
	}
	else if (f.getSignGrade() < this->_grade)
	{
		std::cout << BOLD_YELLOW << this->_name << RESET
			<< " couldn't sign form \"" << BOLD_CYAN
			<< f.getName() << RESET << "\" because his grade is too low !"
			<< std::endl;
	}
	else
	{
		std::cout << BOLD_YELLOW << this->_name << RESET
			<< " signed form \"" << BOLD_CYAN << f.getName()
			<< RESET << "\" !" << std::endl;
		f.signIt();
	}
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade + 1 < 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
	std::cout << BOLD_YELLOW << this->_name << RESET
		<< " get demote to " << BLUE << this->_grade
		<< RESET << " !" << std::endl;
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
	std::cout << BOLD_YELLOW << this->_name << RESET
		<< " get promote to " << BLUE << this->_grade
		<< RESET << " !" << std::endl;
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

std::string Bureaucrat::getName( void ) const
{
	return (this->_name);
}

/* Operators Overload */

std::ostream &operator<<( std::ostream &out, const Bureaucrat &b )
{
	out << BOLD_YELLOW << b.getName()  << RESET << ", bureaucrat grade "
		<< BOLD_BLUE << b.getGrade() << RESET << " !";
	return (out);
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &rhs )
{
	this->_grade = rhs.getGrade();
	std::cout << "Bureaucrat : Copy Operator" << std::endl;
	return (*this);
}

/* Constr & Destr */

Bureaucrat::Bureaucrat( const std::string name, int grade ): _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
	std::cout  << DARK_WHITE << "Bureaucrat : Infos Constructor" << RESET << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ): _name(copy.getName())
{
	this->_grade = copy.getGrade();
	std::cout << DARK_WHITE << "Bureaucrat : Copy Constructor" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << DARK_WHITE << "Bureaucrat : Destructor" << RESET << std::endl;
}

Bureaucrat::Bureaucrat( void ): _name("Unnamed"), _grade(150)
{
	std::cout << DARK_WHITE << "Bureaucrat : Default Constructor" << RESET << std::endl;
}