/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:38:39 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/30 16:21:02 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap::ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	std::cout << "DiamondTrap constructor called" << std::endl;
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackPoint = FragTrap::_attackPoint;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap::ClapTrap(src), ScavTrap::ScavTrap(src) ,FragTrap::FragTrap(src){
	std::cout << "DiamondTrap constructor called" <<std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){
	std::cout << "DiamondTrap assignement operator called" << std::endl;
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoint = rhs._energyPoint;
		this->_attackPoint = rhs._attackPoint;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap name is " << _name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}
