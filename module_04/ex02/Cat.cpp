/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:04:49 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/06 16:25:41 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	this->brain = new Brain();
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Destructor Cat called" << std::endl;
}

void Cat::makeSound()const{
	std::cout << "Meow Meow" << std::endl;
}
