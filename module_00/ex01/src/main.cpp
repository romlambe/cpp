/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:30:13 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:31:23 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/phonebook.hpp"
#include "../header/contact.hpp"
#include <iostream>

int main(){
	Phonebook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH OR EXIT)" << std::endl;
		std::getline(std:: cin, command);
		if (command.compare("ADD") == 0)
			phonebook.add();
		else if (command.compare("SEARCH") == 0)
			phonebook.search();
		else if (command.compare("EXIT") == 0)
			break;
		else
			std::cout << "Enter a valid command (ADD, SEARCH OR EXIT)" << std::endl;
	}
	return 0;
}
