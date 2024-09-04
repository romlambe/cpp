/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:36:46 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:31:39 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackPoint(0){
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src){
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoint = rhs._energyPoint;
		this->_attackPoint = rhs._attackPoint;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target){
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackPoint << " point of damage " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " take " << amount << " damage points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " damage points " << std::endl;
}
