/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:48:06 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 12:47:38 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

int main()
{
	{	
		Span	foo = Span(5);

		try
		{
			for (int i = 0; 1; i++)
			{
				foo.addNumber(i);
				std::cout << i << DARK_GREEN << " added !" << END;
			}	
		}
		catch (const std::exception & e)
		{
			std::cerr << DARK_RED << "Error : " << e.what() << END;
		}

		std::cout <<std::endl;
		
		try
		{
			unsigned int l = foo.longestSpan();
			unsigned int s = foo.shortestSpan();

			std::cout << "Longest span is " << l << std::endl;
			std::cout << "Shortest span is " << s << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << DARK_RED << "Error : " << e.what() << END;
		}
	}

	std::cout << std::endl;
	
	{
		Span	foo = Span(1);
		
		int i = -42;
		foo.addNumber(i);
		std::cout << i << DARK_GREEN << " added !" << END;
		
		try
		{
			unsigned int l = foo.longestSpan();
			std::cout << "Longest span is " << l << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << DARK_RED << "Error : " << e.what() << '\n';
		}
		
	}

	std::cout << std::endl;

	{
		Span	foo = Span(10000);
		std::list<int>	lst;
		
		for (int i = 9999; i >= 0; i--)
		{
			lst.push_back(i);
		}

		try
		{
			foo.addRange(lst.begin(), lst.end());
			std::cout << "Range " << DARK_GREEN << "added" << END;
			
			unsigned int l = foo.longestSpan();
			unsigned int s = foo.shortestSpan();

			std::cout << "Longest span is " << l << std::endl;
			std::cout << "Shortest span is " << s << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << DARK_RED << "Error : " << e.what() << END;
		}
		
	}
}
