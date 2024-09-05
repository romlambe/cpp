/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:54:00 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 16:32:24 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AMateria.hpp"

AMateria::AMateria(){

}

AMateria::AMateria(std::string const & type) : _type(type){

}

AMateria::AMateria(AMateria const & src){
	this->_type = src.getType();
}

AMateria & AMateria::operator=(AMateria const & src){
	if (this->_type != src.getType())
		this->_type = src.getType();
	return *this;
}

AMateria::~AMateria(){

}

std::string const & AMateria::getType()const{
	return (this->_type);
}

void AMateria::use(ICharacter & target){
	(void)target;
}
