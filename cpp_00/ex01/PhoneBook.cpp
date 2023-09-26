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

void	PhoneBook::AddContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNum;
	std::string	secret;
	Contact	data;

	std::cout << "First Name : ";
	std::cin >> firstName;
	data.set_first_name(firstName);
	std::cout << "Last Name : ";
	std::cin >> lastName;
	data.set_last_name(lastName);
	std::cout << "Nick Name : ";
	std::cin >> nickName;
	data.set_nick_name(nickName);
	std::cout << "Phone Number : ";
	std::cin >> phoneNum;
	data.set_phone_num(phoneNum);
	std::cout << "Darkest Secret : ";
	std::cin >> secret;
	data.set_secret(secret);
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
