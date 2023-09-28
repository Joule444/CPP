/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:41:35 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/28 17:38:39 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contact.hpp"

void	Contact::_displayInfo(std::string info)
{
	if (info.length() > 10)
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << info[i];
		}
		std::cout << "." << CYAN << "|" << WHITE;
		return ;
	}
	for (int i = 0; i < (10 - (int)info.length()); i++)
		std::cout << " ";
	std::cout << info << CYAN << "|" << WHITE;
}

void	Contact::ShowContact()
{
	std::cout << std::endl;
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name : " << this->_lastName << std::endl;
	std::cout << "Nick name : " << this->_nickName << std::endl;
	std::cout << "Phone number : " << this->_phoneNum << std::endl;
	std::cout << "Darkest secret : " << this->_secret << std::endl;
	std::cout << std::endl;
}

void	Contact::DisplayContact(int index)
{
	if (this->_firstName == "")
		return ;
	std::cout << CYAN << "\t|" << WHITE;
	for (int i = 0; i < 9; i++)
		std::cout << " ";
	std::cout << index << CYAN << "|" << WHITE;
	this->_displayInfo(this->_firstName);
	this->_displayInfo(this->_lastName);
	this->_displayInfo(this->_nickName);
	std::cout << std::endl;
}

void	Contact::set_first_name(std::string first_name)
{
	this->_firstName = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->_lastName = last_name;
}

void	Contact::set_nick_name(std::string nick_name)
{
	this->_nickName = nick_name;
}

void	Contact::set_phone_num(std::string set_phone_num)
{
	this->_phoneNum = set_phone_num;
}

void	Contact::set_secret(std::string secret)
{
	this->_secret = secret;
}

Contact::Contact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNum = "";
	this->_secret = "";
}

Contact::~Contact()
{
}
