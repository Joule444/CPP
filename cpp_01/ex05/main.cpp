/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:04:10 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/05 17:16:30 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

int	main()
{
	Harl	Karen;

	std::cout << std::endl;
	Karen.complain("DEBUG");
	std::cout << std::endl;
	Karen.complain("INFO");
	std::cout << std::endl;
	Karen.complain("WARNING");
	std::cout << std::endl;
	Karen.complain("ERROR");
	std::cout << std::endl;
	Karen.complain("EXPLOSION");
	std::cout << std::endl;

	return (0);
}