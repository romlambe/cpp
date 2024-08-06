/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:03:34 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/06 16:14:55 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    const WrongAnimal* wrongCat = new WrongCat();
    const WrongAnimal* wrongAnimal = new WrongAnimal();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();

    wrongAnimal->makeSound();

    delete wrongCat;
    delete wrongAnimal;
    delete meta;
    delete j;
    delete i;

    return 0;
}
