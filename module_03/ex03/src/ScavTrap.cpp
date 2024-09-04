/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:37:42 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 15:14:35 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap constructor called" << std::endl;
	_name = name;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackPoint = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
	std::cout << "ScavTrap assignement operator called" << std::endl;
		if (this != &rhs){
			this->_name = rhs._name;
			this->_hitPoint = rhs._hitPoint;
			this->_energyPoint = rhs._energyPoint;
			this->_attackPoint = rhs._attackPoint;
		}
	return *this;
}

void ScavTrap::attack(const std::string &target){
	std::cout << "ScarvTrap " << target << " causing " << this->_attackPoint << " damage points !" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
