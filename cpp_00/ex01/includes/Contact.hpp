/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:38:56 by jthuysba          #+#    #+#             */
/*   Updated: 2023/09/26 22:45:06 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
	#define CONTACT_HPP
	
class Contact
{
	public:
		Contact();
		~Contact();

		void	set_last_name(std::string last_name);
		void	set_first_name(std::string first_name);
		void	set_nick_name(std::string nick_name);
		void	set_phone_num(std::string phone_num);
		void	set_secret(std::string secret);
		void	DisplayContact();
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string _phoneNum;
		std::string _secret;
};

#endif