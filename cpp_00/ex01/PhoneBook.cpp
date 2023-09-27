/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:43 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/26 22:48:46 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/PhoneBook.hpp"

std::string	PhoneBook::_addInfo(std::string text)
{
	std::string	info;

	while (true)
	{
		std::cout << text;
		std::getline(std::cin, info);
		/*
		if (std::cin.eof())
			std::exit(1);
		*/
		if (info.length() == 0)
			std::cout << "Error : empty entry, please retry" << std::endl;
		else
			break ;
	}
	return (info);
}

void	PhoneBook::AddContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNum;
	std::string	secret;
	Contact	data;

	data.set_first_name(this->_addInfo("First Name : "));
	data.set_last_name(this->_addInfo("Last Name : "));
	data.set_nick_name(this->_addInfo("Nick Name : "));
	data.set_phone_num(this->_addInfo("Phone Number : "));
	data.set_secret(this->_addInfo("Darkest Secret : "));
	this->_contactList[this->_nbContact] = data;
	this->_contactList[this->_nbContact].DisplayContact();
}

//Constructeur
PhoneBook::PhoneBook()
{
	this->_nbContact = 0;
	std::cout << "PhoneBook cree !\n";
}

//Destructeur
PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook detruit !\n";
}
