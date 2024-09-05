/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:03:34 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 15:24:40 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
#include "../header/Dog.hpp"
#include "../header/Cat.hpp"
#include "../header/WrongAnimal.hpp"
#include "../header/WrongCat.hpp"


int main() {
	std::cout << "Construction d'un nouvel animal :" << std::endl;
	const Animal* meta = new Animal();
	std::cout << "Construction d'un chien :" << std::endl;
	const Animal* j = new Dog();
	std::cout << "Construction d'un chat :" << std::endl;
	const Animal* i = new Cat();

	j->getType();
	i->getType();
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();
	const WrongAnimal* wrongAnimal = new WrongAnimal();

	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << "WrongCat make sound :" << std::endl;
	wrongCat->makeSound();
	std::cout << std::endl;
	std::cout << "Wrong Animal make sound :" << std::endl;
	wrongAnimal->makeSound();

	delete wrongCat;
	delete wrongAnimal;
	delete meta;
	delete j;
	delete i;

	return 0;
}
