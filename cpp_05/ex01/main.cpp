/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:42:07 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/28 16:07:14 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int	main( void )
{
	try
	{
		Form	foo = Form("Area 51 Form", false, 154, 10);
		std::cout << foo << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try
	{
		Bureaucrat jim = Bureaucrat("Jim Halpert", 2);
		std::cout << jim << std::endl;
		jim.incrementGrade();
		std::cout << jim << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat michael = Bureaucrat("Michael Scott", 1);
		std::cout << michael << std::endl;
		michael.incrementGrade();
		std::cout << michael << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (0);
}