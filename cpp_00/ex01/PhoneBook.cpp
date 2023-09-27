/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:43 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/27 22:43:47 by jthuysba         ###   ########.fr       */
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
		std::cout << text;
		std::getline(std::cin, info);
		if (std::cin.eof())
			exit(1);//WIP
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

	data.set_first_name(this->_getInfo("First Name : "));
	data.set_last_name(this->_getInfo("Last Name : "));
	data.set_nick_name(this->_getInfo("Nick Name : "));
	data.set_phone_num(this->_getInfo("Phone Number : "));
	data.set_secret(this->_getInfo("Darkest Secret : "));
	std::cout << "\nContact added to the PhoneBook !\n" << std::endl; 
	this->_contactList[this->_nbContact] = data;
}

//Constructeur
PhoneBook::PhoneBook()
{
	this->_nbContact = 0;
}
