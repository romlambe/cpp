/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:04:10 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/07 15:58:18 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(std::string type) : type(type){
	std::cout << "Type of animal: " << type << " create" << std::endl;
}

Animal::~Animal(){
	std::cout << "Destructor Animal called" << std::endl;
}

void Animal::setType(std::string type){
	this->type = type;
}

std::string Animal::getType(void)const{
	return type;
}

// void Animal::makeSound()const{
// 	std::cout << "Animal sound " << std::endl;
// }