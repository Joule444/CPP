/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:22:46 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/20 10:04:00 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/templates.hpp"

#define N 5

template< typename T >
void	print( T & elem )
{
	std::cout << "[" << CYAN << elem << RESET << "]" << std::endl;
}

int main( void )
{
    int arr1[] = { 1, 2, 3, 4, 5 };

    std::cout << "arr1(int): " << std::endl;
    iter(arr1, N, &print);

    double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    std::cout << "\narr2(double): " << std::endl;
    iter(arr2, N, &print);

    char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

    std::cout << "\narr3(char): " << std::endl;
    iter(arr3, N, &print);

    std::string arr4[] = { "one", "two", "three", "four", "five" };

    std::cout << "\narr4(string): " << std::endl;
    iter(arr4, N, &print);

    return 0;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main()
// {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }
