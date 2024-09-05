/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:03:34 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 16:28:55 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
#include "../header/Dog.hpp"
#include "../header/Cat.hpp"
#include "../header/WrongAnimal.hpp"
#include "../header/WrongCat.hpp"
#include "../header/Brain.hpp"


int main()
{
  const int size = 10;
  Animal* meta[size];

  for (int i = 0; i < size; i++)
  {
	if (i % 2 == 0)
	  meta[i] = new Dog();
	else
	  meta[i] = new Cat();
	std::cout << std::endl;
  }

  for (int i = 0; i < size; i++)
  {
	std::cout << meta[i]->getType() << " => ";
	meta[i]->makeSound();
	delete meta[i];
	std::cout << std::endl;
  }
  return 0;
}
