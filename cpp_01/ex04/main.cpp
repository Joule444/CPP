/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:32:16 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/03 16:40:51 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "includes/color.h"

int	replaceString(char *file, std::string s1, std::string s2)
{
	std::ifstream	in(file);
	std::string		outfileName = file;
	outfileName.append(".replace");
	std::ofstream	out(outfileName.data());
	std::string		line;
	std::string		modLine;
	std::size_t		cursor;
	std::size_t		found;
	while (std::getline(in, line))
	{
		cursor = 0;
		found = line.find(s1);
		while (cursor < line.length())
		{
			if (found != std::string::npos)
			{
				modLine += line.substr(cursor, found - cursor);
				modLine += s2;
				cursor = found + s1.length();
				found = line.find(s1, cursor);
			}
			else
			{
				modLine += line.substr(cursor);
				break ;
			}
		}
		out << modLine << std::endl;
		modLine = "";
	}
	in.close();
	out.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << RED
			<< "Error : "
			<< RESET
			<< "sed takes 3 arguments :"
			<< CYAN
			<< "\n[filename] [string_to_replace] [new_string]"
			<< RESET
			<< std::endl;
		return (1);
	}
	replaceString(argv[1], argv[2], argv[3]);
	return (0);
}