/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:42:45 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/30 14:32:26 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name){
	std::cout << "FragTrap constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackPoint = 30;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap::ClapTrap(src){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoint = rhs._energyPoint;
		this->_attackPoint = rhs._attackPoint;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap ask a high fives" << std::endl;
}
