/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:48:06 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/15 16:30:44 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

int main()
{
	{	
		Span	foo = Span(5);

		try
		{
			foo.addNumber(0);
			std::cout << "Number added" << std::endl;
			foo.addNumber(1);
			std::cout << "Number added" << std::endl;
			foo.addNumber(2);
			std::cout << "Number added" << std::endl;
			foo.addNumber(3);
			std::cout << "Number added" << std::endl;
			foo.addNumber(4);
			std::cout << "Number added" << std::endl;
			foo.addNumber(5);
			std::cout << "Number added" << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << DARK_RED << "Error : " << e.what() << END;
		}

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
		Span	foo = Span(10000);
		std::list<int>	lst;
		
		for (int i = 9999; i >= 0; i--)
		{
			lst.push_back(i);
			// std::cout << i << " added" << std::endl;
		}

		try
		{
			foo.addRange(lst.begin(), lst.end());
			std::cout << "Range added" << std::endl;
			
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
