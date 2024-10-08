/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:44:40 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:36:09 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"
#include <iostream>

Zombie::Zombie(){
	return ;
}

Zombie::Zombie(std::string name){
	this->_name = name;
	return ;
}

Zombie::~Zombie(){
	std::cout << this->_name << " is dead" << std::endl;
	return ;
}

void Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}
