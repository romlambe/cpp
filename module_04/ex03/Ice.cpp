/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:05:13 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/08 17:00:58 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "ice material create" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src){
	std::cout << "ice copy material create" << std::endl;
}

Ice & Ice::operator=(Ice const & src){
	if (this->_type != src.getType())
		this->_type = src.getType();
	return *this;
}

Ice::~Ice(){
	std::cout << "ice material destroy" << std::endl;
}

AMateria *Ice::clone()const{
	return new Ice(*this);
}

void Ice::use(ICharacter & target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
