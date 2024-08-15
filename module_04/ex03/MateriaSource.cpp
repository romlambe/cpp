/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:17:06 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/08 16:28:36 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0){
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
	std::cout << "Materia Source create" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src){
	_count = src._count;
	for (int i = 0; i < 4; i++)
		_materias[i] = src._materias[i];
	std::cout << "Materia Source copy create" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src){
	_count = src._count;
	for (int i = 0; i < 4; i++)
		_materias[i] = src._materias[i];
	return *this;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		delete _materias[i];
	std::cout << "Materia Source destroy" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m){
	if (_count < 4){
		_materias[_count] = m;
		_count++;
	}
}

AMateria *MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (_materias[i] && _materias[i]->getType()== type)
			return _materias[i]->clone();
	}
	return NULL;
}
