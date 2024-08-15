/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:34:29 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/08 16:59:17 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("none"){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character create" << std::endl;
}

Character::Character(std::string const & name) : _name(name){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character create" << std::endl;
}

Character::Character(Character const & src): _name(src._name){
	for (int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i];
	std::cout << "Character copy create" << std::endl;
}

Character & Character::operator=(Character const & src){
	if (this !=&src){
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
			_inventory[i] = src._inventory[i];
	}
	return *this;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

std::string const & Character::getName()const{
	return _name;
}

void Character::equip(AMateria* m){
	for (int i= 0; i < 4; i++){
		if (_inventory[i] == NULL){
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target){
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
