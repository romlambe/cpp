/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:32:38 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:18:16 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "Constructor Wrong Cat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
	std::cout << "Copy of Cat created" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs){
	if (this != &rhs)
		WrongAnimal::operator = (rhs);
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "Deconstructor Wrong Cat called" << std::endl;
}

