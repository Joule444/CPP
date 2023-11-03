/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 23:33:07 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/Intern.hpp"

/* Members Functions */

AForm	*Intern::makeForm( std::string name, std::string target )
{
	AForm	*form;
	int	id = 0;
	
	while (id < 3 && this->_formTypes[id] != name)
		id++;
	switch (id)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Intern apologizes, he doesn't know this type of form !" << std::endl;
			return (NULL);
	}
	std::cout << "Intern creates a " << BOLD_CYAN << name << RESET
		<< ", what a good boy !" << std::endl;
	return (form);
}

/* Operators Overload */

Intern &Intern::operator=( const Intern &rhs )
{
	(void) rhs;
	std::cout << "Intern : Copy Operator" << std::endl;
	return (*this);
}

/* Constr & Destr */

Intern::Intern( const Intern &copy )
{
	(void) copy;
	this->_formTypes[0] = "ShrubberyCreationForm";
	this->_formTypes[1] = "RobotomyRequestForm";
	this->_formTypes[2] = "PresidentialPardonForm";
	std::cout << DARK_WHITE << "Intern : Copy Constructor" << RESET << std::endl;
}

Intern::~Intern( void )
{
	std::cout << DARK_WHITE << "Intern : Destructor" << RESET << std::endl;
}

Intern::Intern( void )
{
	this->_formTypes[0] = "ShrubberyCreationForm";
	this->_formTypes[1] = "RobotomyRequestForm";
	this->_formTypes[2] = "PresidentialPardonForm";
	std::cout << DARK_WHITE << "Intern : Default Constructor" << RESET << std::endl;
}