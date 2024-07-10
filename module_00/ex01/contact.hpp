/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:28:59 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/10 09:40:43 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact{
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact(void);
	~Contact(void);
	std::string	get_fname();
	void		set_fname(std::string str);
	std::string	get_lname();
	void		set_lname(std::string str);
	std::string	get_nickname();
	void		set_nickname(std::string str);
	std::string	get_phone_number();
	void		set_phone_number(std::string str);
	std::string	get_darkest_secret();
	void		set_darkest_secret(std::string str);
};

#endif
