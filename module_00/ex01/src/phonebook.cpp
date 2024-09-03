/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:29:05 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:31:27 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/phonebook.hpp"
#include <sstream>
#include <iomanip>


// Phonebook::Phonebook(){};
Phonebook::~Phonebook(){};

Phonebook::Phonebook() : index(0){
	std::cout << "Welcome ! You can savec 8 contacts on this adress book" << std::endl;
}

void Phonebook::add(){
	std::string str;

	if (index >= 8)
		std::cout << "You'll destroy the " << index % 8 << " contact" << std::endl;
	std::cout << "Enter first name:" << std::endl;
	std::getline(std::cin >> std::ws, str);
	tab[index % 8].set_fname(str);

	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin >> std::ws, str);
	tab[index % 8].set_lname(str);

	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin >> std::ws, str);
	tab[index % 8].set_nickname(str);

	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin >> std::ws, str);
	tab[index % 8].set_phone_number(str);

	std::cout << "Enter the darkest secret" << std::endl;
	std::getline(std::cin >> std::ws, str);
	tab[index % 8].set_darkest_secret(str);

	std::cout << "The contact has been saved" << std::endl;

	index++;
}

void Phonebook::search(){
	int nb = 0;
	std::string input;
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
	for(int i = 0 ; i < 8 ; i++){
		if (! tab[i].get_fname().empty())
			std::cout << std::setw(10) << i + 1 << "|"
			<< std::setw(10) << (tab[i].get_fname().length() > 10 ? tab[i].get_fname().substr(0, 9) + "." : tab[i].get_fname()) << "|"
			<< std::setw(10) << (tab[i].get_lname().length() > 10 ? tab[i].get_lname().substr(0, 9) + "." : tab[i].get_lname()) << "|"
			<< std::setw(10) << (tab[i].get_nickname().length() > 10 ? tab[i].get_nickname().substr(0, 9) + "." : tab[i].get_nickname())
			<< std::endl;
	}
	std::cout << "Search per index:" << std::endl;
	std::getline(std::cin, input);
	std::stringstream ss(input);
	ss >> nb;
	if (nb > 0 && nb <= 8 && !tab[nb - 1].get_fname().empty()){
		std::cout << "Index	: " << nb << std::endl;
		std::cout << "First Name	: " << tab[nb - 1].get_fname() << std:: endl;
		std::cout << "Last Name	: " << tab[nb - 1].get_lname() << std::endl ;
		std::cout << "Nickname	: " << tab[nb - 1].get_nickname() << std::endl;
		std::cout << "Phone Number	: " << tab[nb - 1].get_phone_number() << std::endl;
		std::cout << "Darkest Secret	: " << tab[nb - 1].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "Invalid index. Please enter a number between 1 and 8" <<std::endl;
}
