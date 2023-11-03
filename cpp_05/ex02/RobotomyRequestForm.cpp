/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:25:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 15:48:59 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RobotomyRequestForm.hpp"

/* Members Functions */

const std::string RobotomyRequestForm::getTarget( void ) const
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

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs )
{
	(void) rhs;
	//WIP
	std::cout << "Robot. Form : Copy Operator" << std::endl;
	return (*this);
}

/* Constr & Destr */

RobotomyRequestForm::RobotomyRequestForm( std::string target ): AForm("Robotomy Request Form", 25, 5), _target(target)
{
	//WIP
	std::cout << DARK_WHITE << "Robot. Form : Params Constructor" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy ): AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), _target(copy.getTarget())
{
	std::cout << DARK_WHITE << "Robot. Form : Copy Constructor" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << DARK_WHITE << "Robot. Form : Destructor" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("Shrubbery Creation Form", 25, 5), _target("undefined")
{
	std::cout << DARK_WHITE << "Robot. Form : Default Constructor" << RESET << std::endl;
}