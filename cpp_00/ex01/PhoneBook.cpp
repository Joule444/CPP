/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:43 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/28 14:36:32 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include "./includes/PhoneBook.hpp"
#include "./includes/color.h"

std::string	PhoneBook::_getInfo(std::string text)
{
	std::string	info;

	while (true)
	{
		std::cout << std::endl << text;
		std::getline(std::cin, info);
		if (std::cin.eof())
			exit(1);
		if (info.length() == 0)
			std::cout << NEG_RED << "[Error]" << RED << " Empty info, please retry !" << WHITE << std::endl;
		else
			break ;
	}
	return (info);
}

void	PhoneBook::Search()
{
	std::string	prompt;
	int			id;

	std::cout << std::endl;
	for (int i = 1; i <= 8; i++)
	{
		this->_contactList[i - 1].DisplayContact(i);
	}
	std::cout << std::endl;
	while (true)
	{
		std::cout << WHITE << "Search" << CYAN << "> " << WHITE;
		std::getline(std::cin, prompt);
		if (std::cin.eof())
			exit(1);
		if (prompt.length() == 0)
			std::cout << NEG_RED << "[Error]" << RED << " Empty id, please retry !" << WHITE << std::endl;
		else if (prompt.length() > 1 || (prompt[0] < 49 || prompt[0] > 56))
			std::cout << NEG_RED << "[Error]" << RED << " Invalid id, please retry !" << WHITE << std::endl;
		else
			break ;
	}
	id = atoi(prompt.c_str());
	this->_contactList[id - 1].ShowContact();
}

void	PhoneBook::AddContact()
{
	Contact	data;

	data.set_first_name(this->_getInfo("First Name : "));
	data.set_last_name(this->_getInfo("Last Name : "));
	data.set_nick_name(this->_getInfo("Nick Name : "));
	data.set_phone_num(this->_getInfo("Phone Number : "));
	data.set_secret(this->_getInfo("Darkest Secret : "));
	std::cout << "\nContact added to the PhoneBook !\n" << std::endl; 
	this->_contactList[this->_nbContact] = data;
	this->_nbContact++;
}

//Constructeur
PhoneBook::PhoneBook()
{
	this->_nbContact = 0;
}
