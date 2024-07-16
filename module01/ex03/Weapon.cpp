/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:26:15 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/16 15:02:12 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	return ;
}

Weapon::~Weapon(){
	return ;
}

Weapon::Weapon(std::string _type){
	this->_type = _type;
	return ;
}
std::string const &Weapon::getType(){
	return (this->_type);
}

void Weapon::setType(std::string newtype){
	this->_type = newtype;
}

