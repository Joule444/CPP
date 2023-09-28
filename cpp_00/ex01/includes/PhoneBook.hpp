/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:38:13 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/28 17:16:48 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		
		void	AddContact();
		void	Search();
	private :
		int		_nbContact;
		int		_oldContact;
		Contact	_contactList[8];

		std::string	_getInfo(std::string text);
};

#endif