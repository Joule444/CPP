/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:48:06 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/14 16:44:43 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

int	main( void )
{
	Span foo = Span(3);

	try
	{
		foo.addNumber(0);
		std::cout << "Number added to the span" << END;
		// foo.addNumber(1);
		// std::cout << "Number added to the span" << END;
		// // foo.addNumber(22);
		// // std::cout << "Number added to the span" << END;
		
		std::cout << "The shortest span is " << CYAN << foo.shortestSpan() << END;
		std::cout << "The longest span is " << CYAN << foo.longestSpan() << END;
	}
	catch (const std::exception & e)
	{
		std::cerr << DARK_RED << "Error" << END;
	}

}