/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/27 15:43:24 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"

/* Members Functions */

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade + 1 < 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << BOLD_YELLOW << b.getName()  << RESET << ", bureaucrat grade "
		<< BOLD_BLUE << b.getGrade() << RESET ;
	return (out);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs.getGrade();
	std::cout << "Bureaucrat : Copy Operator !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Bureaucrat::Bureaucrat( const std::string name, int grade ): _name(name)
{
	std::cout << "Bureaucrat : Info Constructor !" << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ): _name(copy.getName())
{
	this->_grade = copy.getGrade();
	std::cout << "Bureaucrat : Copy Constructor !" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat : Destructor !" << std::endl;
}

Bureaucrat::Bureaucrat( void ): _name("Unnamed"), _grade(150)
{
	std::cout << "Bureaucrat : Default Constructor !" << std::endl;
}