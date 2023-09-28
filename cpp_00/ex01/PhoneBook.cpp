/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:43 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/28 18:02:00 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include "./includes/PhoneBook.hpp"
#include "./includes/color.h"

void	PhoneBook::Search()
{
	std::string	prompt;
	int			id;

	std::cout << std::endl;
	if (this->_nbContact == 0)
	{
		std::cout << "\t--PhoneBook is empty !--\n" << std::endl;
		return ;
	}
	std::cout << "\t";
	for (int i = 0; i < 4; i++)
		std::cout << CYAN << "+----------";
	std::cout << "+" << std::endl;
	for (int i = 1; i <= this->_nbContact; i++)
	{
		this->_contactList[i - 1].DisplayContact(i);
		std::cout << "\t";
		for (int i = 0; i < 4; i++)
			std::cout << CYAN << "+----------";
		std::cout << "+" << std::endl;
	}
	std::cout << std::endl;
	while (true)
	{
		std::cout << WHITE << "Search" << CYAN << "> " << WHITE;
		std::getline(std::cin, prompt);
		if (std::cin.eof())
			exit(1);
		id = atoi(prompt.c_str());
		if (prompt.length() == 0)
			std::cout << NEG_RED << "[Error]" << RED << " Empty id, please retry !" << WHITE << std::endl;
		else if (prompt.length() > 1 || (prompt[0] < 49 || prompt[0] > 56) || id > this->_nbContact)
			std::cout << NEG_RED << "[Error]" << RED << " Invalid id, please retry !" << WHITE << std::endl;
		else
			break ;
	}
	this->_contactList[id - 1].ShowContact();
}

std::string	PhoneBook::_getInfo(std::string text)
{
	std::string	info;

	while (true)
	{
		std::cout << text;
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


void	PhoneBook::AddContact()
{
	Contact	data;

	if (this->_nbContact == 8)
	{
		std::cout << "\n\t\t--PhoneBook is full !--\n\t--This contact will replace the oldest !\n";
	}
	std::cout << std::endl;
	data.set_first_name(this->_getInfo("*First Name : "));
	data.set_last_name(this->_getInfo("*Last Name : "));
	data.set_nick_name(this->_getInfo("*Nick Name : "));
	data.set_phone_num(this->_getInfo("*Phone Number : "));
	data.set_secret(this->_getInfo("*Darkest Secret : "));
	std::cout << "\n\t--Contact added to the PhoneBook !--\n" << std::endl;
	if (this->_nbContact == 8)
	{
		this->_contactList[this->_oldContact] = data;
		if (this->_oldContact == 7)
			this->_oldContact = 0;
		else
			this->_oldContact++;
		return ;
	}
	this->_contactList[this->_nbContact] = data;
	this->_nbContact++;
}

//Constructeur
PhoneBook::PhoneBook()
{
	this->_nbContact = 0;
	this->_oldContact = 0;
}
