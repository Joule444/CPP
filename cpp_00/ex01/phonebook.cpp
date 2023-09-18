/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:43 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/18 18:12:38 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/phonebook.hpp"

//Constructeur
PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook cree !\n";
}

//Destructeur
PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook detruit !\n";
}
