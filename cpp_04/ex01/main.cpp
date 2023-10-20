/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:51:32 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/20 12:35:54 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

int	main( void )
{

	std::cout << YELLOW << ">>>CREATE LOOP<<<" << RESET << std::endl;

	Animal	*zoo[10];
	
	for (int i = 0; i< 10; i++)
	{
		if (i % 2 == 0)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	std::cout << std::endl;
	std::cout << YELLOW << ">>>DELETE LOOP<<<" << RESET << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete zoo[i];
	}

	std::cout << std::endl;
	std::cout << YELLOW << ">>>IDEA SET<<<" << RESET << std::endl;
	
	const Dog* foo = new Dog();
	
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			foo->getBrain().setIdea(i, "Eat");
		else
			foo->getBrain().setIdea(i, "Play");
	}
	
	std::cout << std::endl;
	std::cout << YELLOW << ">>>IDEA PRINT<<<" << RESET << std::endl;
	
	for (int i = 0; i < 100; i++)
	{
		std::cout << "[" << BLUE << i << RESET << "] " << foo->getBrain().getIdea(i) << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << YELLOW << ">>>CREATING COPY<<<" << RESET << std::endl;
	
	const Cat* bar = new Cat();
	
	bar->getBrain() = foo->getBrain();
	
	std::cout << std::endl;
	std::cout << YELLOW << ">>>COPY IDEAS<<<" << RESET << std::endl;
	
	for (int i = 0; i < 100; i++)
	{
		std::cout << "[" << BLUE << i << RESET << "] " << bar->getBrain().getIdea(i) << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << YELLOW << ">>>DESTRUCT<<<" << RESET << std::endl;
	
	delete foo;
	delete bar;
	
	return (0);
}