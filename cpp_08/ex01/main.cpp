/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:48:06 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/15 15:30:57 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

int	main( void )
{
	Span foo = Span(2);

	try
	{
		foo.addNumber(0);
		std::cout << "Number added to the span" << END;
		foo.addNumber(1);
		std::cout << "Number added to the span" << END;
		foo.addNumber(22);
		std::cout << "Number added to the span" << END;
		
		unsigned int shortest = foo.shortestSpan();
		unsigned int longest = foo.longestSpan();
		
		std::cout << "The shortest span is " << CYAN << shortest << END;
		std::cout << "The longest span is " << CYAN << longest << END;
	}
	catch (const std::exception & e)
	{
		std::cerr << DARK_RED << "Error : " << e.what() << END;
	}

}