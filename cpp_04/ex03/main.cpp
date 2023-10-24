/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:44:18 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/24 17:31:50 by jthuysba         ###   ########.fr       */
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
	std::cout << BOLD_BLUE << "\n>>>CREATING AND FILLING SOURCE<<<" << RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << BOLD_BLUE << "\n>>>CREATING CHARACTERS<<<" << RESET << std::endl;
	ICharacter* bob = new Character("Bob");
	ICharacter* fanta = new Character("Fanta");

	std::cout << BOLD_BLUE << "\n>>>CREATING ICE MATERIA<<<" << RESET << std::endl;
	AMateria *tmp = src->createMateria("ice");
	bob->equip(tmp);
	
	std::cout << BOLD_BLUE << "\n>>>CREATING CURE MATERIA<<<" << RESET << std::endl;
	tmp = src->createMateria("cure");
	bob->equip(tmp);

	std::cout << BOLD_BLUE << "\n>>>USING MATERIAS<<<" << RESET << std::endl;
	bob->use(0, *fanta);
	bob->use(1, *fanta);
	bob->use(4, *fanta);

	std::cout << BOLD_BLUE << "\n>>>UNEQUIPPING MATERIA<<<" << RESET << std::endl;
	bob->unequip(1);
	bob->use(1, *bob);

	std::cout << BOLD_BLUE << "\n>>>DELETING CHARACTERS<<<" << RESET << std::endl;
	delete bob;
	delete fanta;
	
	std::cout << BOLD_BLUE << "\n>>>DELETING DROPPED MATERIA<<<" << RESET << std::endl;
	delete tmp;

	std::cout << BOLD_BLUE << "\n>>>DELETING SOURCE<<<" << RESET << std::endl;
	delete src;
	std::cout << std::endl;

	return 0;
	
}