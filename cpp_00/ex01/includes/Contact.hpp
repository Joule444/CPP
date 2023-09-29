/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:38:56 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 11:35:53 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
	#define CONTACT_HPP

#include <string.h>
#include <stdlib.h>
#include <iostream>
#include "color.h"

class Contact
{
	public:

		Contact();

		void	setLastName(std::string last_name);
		void	setFirstName(std::string first_name);
		void	setNickName(std::string nick_name);
		void	setPhoneNum(std::string phone_num);
		void	setSecret(std::string secret);
		void	displayContact(int index);
		void	showContact();

	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string _phoneNum;
		std::string _secret;

		void	_displayInfo(std::string info);
};

#endif