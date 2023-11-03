/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:25:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 15:49:04 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PresidentialPardonForm.hpp"

/* Members Functions */

const std::string PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

/* Operators Overload */

// std::ostream &operator<<(std::ostream &out, const AForm &f)
// {
// 	out << "Form \"" << BOLD_CYAN << f.getName()
// 		<< RESET << "\", signed status " << BOLD_WHITE
// 		<< f.getIsSigned() << RESET << ", grade to sign "
// 		<< BOLD_BLUE << f.getSignGrade() << RESET
// 		<< ", grade to execute " << BOLD_BLUE
// 		<< f.getExecGrade() << RESET << " !";
// 	return (out);
// }

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs )
{
	(void) rhs;
	//WIP
	std::cout << "Pres. Form : Copy Operator" << std::endl;
	return (*this);
}

/* Constr & Destr */

PresidentialPardonForm::PresidentialPardonForm( std::string target ): AForm("Presidential Pardon Form", 72, 45), _target(target)
{
	//WIP
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

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("Shrubbery Creation Form", 72, 45), _target("undefined")
{
	std::cout << DARK_WHITE << "Pres. Form : Default Constructor" << RESET << std::endl;
}