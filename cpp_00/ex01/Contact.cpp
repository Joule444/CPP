/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:41:35 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/27 21:22:53 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contact.hpp"

void	Contact::DisplayContact()
{
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickName << std::endl;
	std::cout << this->_phoneNum << std::endl;
	std::cout << this->_secret << std::endl;
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
