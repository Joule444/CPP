/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:36:14 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/29 11:32:56 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int	main(int argc, char **argv)
{
	(void) argv;
	PhoneBook	MyPhoneBook;
	std::string	prompt;
	
	if (argc != 1)
	{
		std::cout << "Too many arguments !\n";
		return (1);
	}
	std::cout << WHITE << "\n\t--Welcome to the PhoneBook !--\n\n";
	while (true)
	{
		std::cout << WHITE << "PhoneBook" << CYAN << "> " << WHITE;
		std::getline(std::cin, prompt);
		if (std::cin.eof())
			return (1);
		if (prompt.length() == 0)
			std::cout << NEG_RED << "[Error]" << RED << " Empty entry, please retry !" << WHITE << std::endl;
		else if (prompt == "ADD")
			MyPhoneBook.addContact();
		else if (prompt == "SEARCH")
			MyPhoneBook.searchContact();
		else if (prompt == "EXIT")
		{
			std::cout << "\n\t--Closing PhoneBook... Bye bye !--\n" << std::endl;
			return (1);
		}
		else
			std::cout << NEG_RED << "[Error]" << RED << " Invalid entry, please retry !" << WHITE << std::endl;
	}

}
