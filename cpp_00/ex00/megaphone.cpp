/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:24:45 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/15 11:26:50 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    for (int i = 1; argv[i]; i++)
    {
        for (int j = 0; argv[i][j]; j++)
            std::cout << (char)toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return (0);
}
