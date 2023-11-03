/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:42:07 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 17:51:42 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"

int	main( void )
{
	ShrubberyCreationForm foo = ShrubberyCreationForm("house");
	
	try
	{
		Bureaucrat	d = Bureaucrat("Dwight", 137);
		std::cout << d << std::endl;
		foo.beSigned(d);
		foo.beExecuted(d);
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << '\n';
	}
	
	return (0);
}