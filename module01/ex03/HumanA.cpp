/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:26:29 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/16 15:19:22 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon): _name(_name), weapon(weapon){
	return ;
}

HumanA::~HumanA(){
	return ;
}

void HumanA::attack(){
	std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}

std::string HumanA::getName(){
	return (this->_name);
}
