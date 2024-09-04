/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:26:56 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:16:48 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanB.hpp"

HumanB::HumanB(std::string _name): _name(_name){
	this->_name = _name;
	return ;
}

HumanB::~HumanB(){
	return ;
}

void HumanB::attack(){
	std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}
