/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:04:49 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 16:28:45 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Cat.hpp"

Cat::Cat() : Animal("Cat"){
	this->brain = new Brain();
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src){
	this->brain = new Brain();
	*this = src;
	std::cout << "Copy of Cat created" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs){
	if (this != &rhs)
		Animal::operator = (rhs);
	return *this;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Destructor Cat called" << std::endl;
}

void Cat::makeSound()const{
	std::cout << "Meow Meow" << std::endl;
}
