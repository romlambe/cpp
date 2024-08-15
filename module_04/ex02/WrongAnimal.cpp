/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:23:53 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/06 15:53:31 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Constructor Wrong Animal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
	std::cout << "Type of Wrong Animal:" << type << "called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor Wrong Animal called" << std::endl;
}

void WrongAnimal::setType(std::string type){
	this->type = type;
}

std::string WrongAnimal::getType()const{
	return type;
}

void WrongAnimal::makeSound() const{
	std::cout << "Wrong animal sound" << std::endl;
}
