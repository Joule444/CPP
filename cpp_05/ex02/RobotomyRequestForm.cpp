/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:25:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 20:35:40 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RobotomyRequestForm.hpp"

/* Members Functions */

void	RobotomyRequestForm::beExecuted( Bureaucrat const &executor ) const
{
	this->execute(executor);

	std::srand(std::time(0));
	int	rand = std::rand();
	
	std::cout << "Form \"" << BOLD_CYAN << this->getName() << RESET
		<< "\" is executed by " << BOLD_YELLOW 
		<< executor.getName() << RESET << " !" << std::endl;
	std::cout << "*Bzzzzzzzzzzzzzkrrrrrrrrrrpshhhhhhhhhhhhh*...";
	if (rand % 2 == 0)
	{
		std::cout << BOLD_GREEN << this->_target
			<< RESET << " has been successfully robotomized !" << std::endl;
	}
	else
	{
		std::cout << "Oops, the robotomy failed..." << std::endl;
	}
}

const std::string RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

/* Operators Overload */

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs )
{
	(void) rhs;
	//WIP
	std::cout << "Robot. Form : Copy Operator" << std::endl;
	return (*this);
}

/* Constr & Destr */

RobotomyRequestForm::RobotomyRequestForm( std::string target ): AForm("Robotomy Request Form", 72, 45), _target(target)
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

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("Robotomy Request Form", 72, 45), _target("undefined")
{
	std::cout << DARK_WHITE << "Robot. Form : Default Constructor" << RESET << std::endl;
}