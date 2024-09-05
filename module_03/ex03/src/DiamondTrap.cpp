/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:38:39 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 12:27:38 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name){
	std::cout << "DiamondTrap constructor called" << std::endl;
	// this->_name = name;
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackPoint = FragTrap::_attackPoint;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap::ClapTrap(src),FragTrap::FragTrap(src), ScavTrap::ScavTrap(src) {
	std::cout << "DiamondTrap constructor called" <<std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){
	std::cout << "DiamondTrap assignement operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_attackPoint = rhs._attackPoint;
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	// std::cout << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap name is " << _name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}
