/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:57:32 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/21 13:00:18 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MutantStack.hpp"

int main(void)
{
	MutantStack<int> foo;

	std::cout << foo.size() << std::endl;
	return (0);
}