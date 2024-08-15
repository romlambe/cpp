/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:12:21 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/08 16:24:49 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria* _materias[4];
	int _count;
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource & operator=(MateriaSource const & src);
	virtual ~MateriaSource();
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif
