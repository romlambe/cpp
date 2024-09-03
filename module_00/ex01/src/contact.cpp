/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:29:03 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:31:16 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};

std::string	Contact::get_fname(){
	return fname;
}

void	Contact::set_fname(std::string str){
	fname = str;
}

std::string Contact::get_lname(){
	return lname;
}

void	Contact::set_lname(std::string str){
	lname = str;
}

std::string Contact::get_nickname(){
	return nickname;
}

void	Contact::set_nickname(std::string str){
	nickname = str;
}

std::string Contact::get_phone_number(){
	return phone_number;
}

void	Contact::set_phone_number(std::string str){
	phone_number = str;
}

std::string Contact::get_darkest_secret(){
	return darkest_secret;
}

void	Contact::set_darkest_secret(std::string str){
	darkest_secret = str;
}

