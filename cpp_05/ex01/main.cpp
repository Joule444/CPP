/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:42:07 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 21:55:11 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	dwight = Bureaucrat("Dwight Schrute", 3);
		Form	foo = Form("Michael Scarn's secret script", 3, 10);
		
		std::cout << dwight << std::endl;
		std::cout << foo << std::endl;
		dwight.signForm(foo);
		foo.beSigned(dwight);
	}
	catch(std::exception & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (0);
}