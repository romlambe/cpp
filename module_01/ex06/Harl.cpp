/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:01:13 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/17 14:08:18 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	return ;
}

Harl::~Harl(){
	return ;
}

void Harl::debug(){
	std::cout << "[DEBUG] This is a debug message" << std::endl;
}

void Harl::info(){
	std::cout << "[INFO] This is a info message" << std::endl;
}

void Harl::warning(){
	std::cout << "[WARNING] This is a warning message" << std::endl;
}

void Harl::error(){
	std::cout << "[ERROR] This is a error message" << std::endl;
}

void Harl::complain(std::string level){
	std::string _level[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	int i = 0;
	while (level != _level[i])
		i++;
	switch (i){
	case 0:
		Harl::debug();
	case 1:
		Harl::info();
	case 2:
		Harl::warning();
	case 3:
		Harl::error();
		break;
	default:
		std::cout << "UNVALID ARGUMENT" << std::endl;
		break;
	}
}
