/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:44:18 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/24 17:12:22 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/ICharacter.hpp"
#include "includes/Character.hpp"
#include "includes/IMateriaSource.hpp"
#include "includes/MateriaSource.hpp"


int	main( void )
{
	// std::cout << BOLD_BLUE << "\n>>>CREATING CHARACTERS<<<" << RESET << std::endl;
	// ICharacter* foo = new Character("Bob");
	// ICharacter* bar = new Character("Fanta");

	// std::cout << BOLD_BLUE << "\n>>>CREATING ICE MATERIA<<<" << RESET << std::endl;
	// AMateria *tmp = new Ice();

	// std::cout << BOLD_BLUE << "\n>>>EQUIPING ICE MATERIA<<<" << RESET << std::endl;
	// foo->equip(tmp);
	
	// std::cout << BOLD_BLUE << "\n>>>CREATING CURE MATERIA<<<" << RESET << std::endl;
	// tmp = new Cure();
	
	// std::cout << BOLD_BLUE << "\n>>>EQUIPING CURE MATERIA<<<" << RESET << std::endl;
	// foo->equip(tmp);

	// std::cout << BOLD_BLUE << "\n>>>USING ICE MATERIA<<<" << RESET << std::endl;
	// foo->use(0, *bar);

	// std::cout << BOLD_BLUE << "\n>>>USING CURE MATERIA<<<" << RESET << std::endl;
	// foo->use(1, *bar);

	// std::cout << BOLD_BLUE << "\n>>>USING OUT OF RANGE MATERIA<<<" << RESET << std::endl;
	// foo->use(4, *bar);

	// std::cout << BOLD_BLUE << "\n>>>UNEQUIPPING MATERIA<<<" << RESET << std::endl;
	// foo->unequip(1);

	// std::cout << BOLD_BLUE << "\n>>>TRYING TO USE MATERIA<<<" << RESET << std::endl;
	// foo->use(1, *foo);

	// std::cout << BOLD_BLUE << "\n>>>DELETING CHARACTERS<<<" << RESET << std::endl;
	// delete foo;
	// delete bar;
	
	// std::cout << BOLD_BLUE << "\n>>>DELETING DROPPED MATERIA<<<" << RESET << std::endl;
	// delete tmp;
	// std::cout << std::endl;

	// return (0);

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
	
}