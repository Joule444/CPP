/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:36:14 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/27 22:46:36 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int	main(int argc, char **argv)
{
	(void) argv;
	PhoneBook	MyPhoneBook;
	std::string	prompt;
	
	if (argc != 1)
		return (1);
	while (true)
	{
		std::cout << "PhoneBook" << CYAN << "> " << WHITE;
		std::getline(std::cin, prompt);
		if (std::cin.eof())
			return (1);
		if (prompt.length() == 0)
			std::cout << NEG_RED << "[Error]" << RED << " Empty entry, please retry !" << WHITE << std::endl;
		else if (prompt == "ADD")
			MyPhoneBook.AddContact();
		// else if (prompt == "SEARCH")
		// 	MyPhoneBook.Search
		else if (prompt == "EXIT")
		{
			std::cout << "Fermeture du PhoneBook..." << std::endl;
			return (1);
		}
		else
			std::cout << NEG_RED << "[Error]" << RED << " Invalid entry, please retry !" << WHITE << std::endl;
	}

}
