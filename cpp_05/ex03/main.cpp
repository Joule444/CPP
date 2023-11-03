/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:42:07 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 23:38:36 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/Intern.hpp"

int	main( void )
{
	Intern someRandomIntern;
	AForm	*foo;
		
	foo = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	if (!foo)
		return (1);
	try
	{
		Bureaucrat	jbar = Bureaucrat("Jim", 2);

		jbar.signForm(*foo);
		jbar.executeForm(*foo);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}
	delete foo;

	std::cout << std::endl;
	
	foo = someRandomIntern.makeForm("UknownForm", "Bender");
	if (!foo)
		return (1);
	try
	{
		Bureaucrat	jbar = Bureaucrat("Jim", 2);

		jbar.signForm(*foo);
		jbar.executeForm(*foo);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}
	delete foo;
	return (0);
}