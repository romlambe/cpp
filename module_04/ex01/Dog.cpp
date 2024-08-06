/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:04:45 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/06 16:25:12 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	this->brain = new Brain();
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::~Dog(){
	delete this->brain;
	std::cout << "Destructor Dog called" << std::endl;
}

void Dog::makeSound()const{
	std::cout << "Woof Woof" << std::endl;
}
