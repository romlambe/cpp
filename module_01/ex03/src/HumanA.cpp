/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:26:29 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:16:43 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanA.hpp"

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
