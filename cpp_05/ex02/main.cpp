/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:42:07 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 21:24:39 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"

int	main( void )
{
	ShrubberyCreationForm foo = ShrubberyCreationForm("office");
	
	try
	{
		Bureaucrat	dfoo = Bureaucrat("Dwight", 42);
		std::cout << dfoo << std::endl;
		foo.beSigned(dfoo);
		foo.beExecuted(dfoo);
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << '\n';
	}
	
	std::cout << std::endl;
	
	RobotomyRequestForm bar = RobotomyRequestForm("Creed");
	
	try
	{
		Bureaucrat	jbar = Bureaucrat("Jim", 45);
		std::cout << jbar << std::endl;
		bar.beSigned(jbar);
		bar.beExecuted(jbar);
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << '\n';
	}
	
	std::cout << std::endl;
	
	PresidentialPardonForm fubar = PresidentialPardonForm("Ryan");
	
	try
	{
		Bureaucrat	mfubar = Bureaucrat("Michael", 25);
		std::cout << mfubar << std::endl;
		fubar.beSigned(mfubar);
		mfubar.executeForm(fubar);
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << '\n';
	}
	
	return (0);
}