/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:25:42 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 17:49:54 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ShrubberyCreationForm.hpp"

/* Other Functions */

void	shrubIt( std::ofstream &out )
{
	out << "					,@@@@@@@," << std::endl;
	out << "		,,,.    ,@@@@@@/@@, .oo8888o." << std::endl;
	out << "	,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	out << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	out << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	out << "	%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	out << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	out << "		 |o|        | |         | |" << std::endl;
	out << "		 |.|        | |         | |" << std::endl;
	out << " _\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}

/* Members Functions */

void	ShrubberyCreationForm::beExecuted( Bureaucrat const & executor ) const
{
	try
	{
		this->execute(executor);
	}
	catch(const AForm::FormNotSignedException & e)
	{
		throw (e);
	}
	catch(const AForm::GradeTooLowException & e)
	{
		throw (e);
	}

	std::string		outfile = this->_target + "_shrubbery";
	std::ofstream	of;
	
	of.open(outfile.c_str());
	try
	{
		if (!of)
		{
			std::cout << "outfile creation error !" << std::endl;
			throw (std::exception());
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return ;
	}
	shrubIt(of);
	of.close();
	std::cout << "Form \"" << BOLD_CYAN << this->getName() << RESET
		<< "\" is executed by " << BOLD_YELLOW 
		<< executor.getName() << RESET << " !" << std::endl;
}

const std::string ShrubberyCreationForm::getTarget( void ) const
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

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs )
{
	(void) rhs;
	//WIP
	std::cout << "Shrub. Form : Copy Operator" << std::endl;
	return (*this);
}

/* Constr & Destr */

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
	//WIP
	std::cout << DARK_WHITE << "Shrub. Form : Params Constructor" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ): AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), _target(copy.getTarget())
{
	std::cout << DARK_WHITE << "Shrub. Form : Copy Constructor" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << DARK_WHITE << "Shrub. Form : Destructor" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("Shrubbery Creation Form", 145, 137), _target("undefined")
{
	std::cout << DARK_WHITE << "Shrub. Form : Default Constructor" << RESET << std::endl;
}