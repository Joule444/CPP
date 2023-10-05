/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:55:24 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/05 17:58:53 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
	#define HARL_HPP

# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"
# define RESET "\x1B[0m"

#include <iostream>

class Harl
{
	public:

		Harl( void );
		~Harl( void );

		void	complain( std::string level );
		int	getFilterLevel( std::string level );

	private:
	
		void	(Harl::*_func[4])(void);
		std::string	_level[4];
	
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
};

#endif
