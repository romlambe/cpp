/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:41:08 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 16:32:28 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Cure.hpp"
#include "../header/AMateria.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "cure material create" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src){
	std::cout << "cure copy material create" << std::endl;
}

Cure & Cure::operator=(Cure const & src){
	if (this->_type != src.getType())
		this->_type = src.getType();
	return *this;
}

Cure::~Cure(){
	std::cout << "cure material destroy" << std::endl;
}


AMateria *Cure::clone()const{
	return new Cure(*this);
}

void Cure::use(ICharacter & target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
