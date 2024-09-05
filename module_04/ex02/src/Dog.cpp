/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:04:45 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 16:30:26 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Dog.hpp"

Dog::Dog() : Animal("Dog"){
	this->brain = new Brain();
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src){
	this->brain = new Brain();
	*this = src;
	std::cout << "Copy of Cat created" << std::endl;
}

Dog & Dog::operator=(Dog const &rhs){
	if (this != &rhs)
		Animal::operator = (rhs);
	return *this;
}

Dog::~Dog(){
	delete this->brain;
	std::cout << "Destructor Dog called" << std::endl;
}

void Dog::makeSound()const{
	std::cout << "Woof Woof" << std::endl;
}
