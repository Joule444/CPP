/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:25:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 21:27:43 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PresidentialPardonForm.hpp"

/* Members Functions */

void	PresidentialPardonForm::beExecuted( Bureaucrat const &executor ) const
{
	this->execute(executor);
	std::cout << "Form \"" << BOLD_CYAN << this->getName() << RESET
		<< "\" is executed by " << BOLD_YELLOW 
		<< executor.getName() << RESET << " !" << std::endl;
	std::cout << BOLD_GREEN << this->_target << RESET
		<< " has been pardoned by Zaphod Beeblebrox !" << std::endl;
}

const std::string PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

/* Operators Overload */

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs )
{
	(void) rhs;
	std::cout << "Pres. Form : Copy Operator" << std::endl;
	return (*this);
}

/* Constr & Destr */

PresidentialPardonForm::PresidentialPardonForm( std::string target ): AForm("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << DARK_WHITE << "Pres. Form : Params Constructor" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy ): AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), _target(copy.getTarget())
{
	std::cout << DARK_WHITE << "Pres. Form : Copy Constructor" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << DARK_WHITE << "Pres. Form : Destructor" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("Presidential Pardon Form", 25, 5), _target("undefined")
{
	std::cout << DARK_WHITE << "Pres. Form : Default Constructor" << RESET << std::endl;
}