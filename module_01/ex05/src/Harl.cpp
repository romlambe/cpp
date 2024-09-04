/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:27:41 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:17:53 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"

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
	void	(Harl::*complaints[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string levels[] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};

	for (int i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*complaints[i])();
			return;
		}
	}
	std::cout << "Unknow level: " << level << std::endl;

}
