/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:04:10 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/05 16:40:13 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

int	main()
{
	Harl	Karen;

	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	return (0);
}