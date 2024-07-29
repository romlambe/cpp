/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:26:56 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/16 15:19:25 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

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
